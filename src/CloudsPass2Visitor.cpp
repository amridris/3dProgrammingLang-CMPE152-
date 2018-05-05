#include <iostream>
#include <string>

#include "CloudsPass2Visitor.h"
#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"
#include "wci/intermediate/symtabimpl/Predefined.h"

using namespace wci;
using namespace wci::intermediate;
using namespace wci::intermediate::symtabimpl;

CloudsPass2Visitor::CloudsPass2Visitor(ostream& j_file)
    : program_name(""), j_file(j_file)
{
}

CloudsPass2Visitor::~CloudsPass2Visitor() {}

antlrcpp::Any CloudsPass2Visitor::visitProgram(CloudsParser::ProgramContext *ctx)
{
    auto value = visitChildren(ctx);
    return value;
}

antlrcpp::Any CloudsPass2Visitor::visitHeader(CloudsParser::HeaderContext *ctx)
{
    program_name = ctx->ID()->toString();
    return visitChildren(ctx);
}

antlrcpp::Any CloudsVisitor::visitBlock(CloudsParser::BlockContext *ctx)
{
    // Emit the main program header.
    j_file << endl;
    j_file << ".method public static main([Ljava/lang/String;)V" << endl;
    j_file << endl;
    j_file << "\tnew RunTimer" << endl;
    j_file << "\tdup" << endl;
    j_file << "\tinvokenonvirtual RunTimer/<init>()V" << endl;
    j_file << "\tputstatic        " << program_name
           << "/_runTimer LRunTimer;" << endl;
    j_file << "\tnew PascalTextIn" << endl;
    j_file << "\tdup" << endl;
    j_file << "\tinvokenonvirtual PascalTextIn/<init>()V" << endl;
    j_file << "\tputstatic        " + program_name
           << "/_standardIn LPascalTextIn;" << endl;

    auto value = visitChildren(ctx);

    // Emit the main program epilogue.
    j_file << endl;
    j_file << "\tgetstatic     " << program_name
               << "/_runTimer LRunTimer;" << endl;
    j_file << "\tinvokevirtual RunTimer.printElapsedTime()V" << endl;
    j_file << endl;
    j_file << "\treturn" << endl;
    j_file << endl;
    j_file << ".limit locals 16" << endl;
    j_file << ".limit stack 16" << endl;
    j_file << ".end method" << endl;

    return value;
}

antlrcpp::Any CloudsPass2Visitor::visitEnvironments(CloudsParser::EnvironmentsContext *ctx)
{
    current_environment_name = ctx->ID()->toString();
    j_file << "iload 100\n" << "iload 100\n" << "iload 100\n";
    j_file << "multianewarray [[[I 3\n";
    j_file << "putstatic " << program_name << "/" 
                << current_environment_name << " " << "[[[I\n" << endl;
}



antlrcpp::Any CloudsPass2Visitor::visitStat(CloudsParser::StatContext *ctx)
{
    j_file << endl << "; " + ctx->getText() << endl << endl;

    return visitChildren(ctx);
}

antlrcpp::Any CloudsPass2Visitor::visitAssignment_stmt(CloudsParser::Assignment_stmtContext *ctx)
{
    auto value = visit(ctx->expr());

    string type_indicator =
                  (ctx->expr()->type == Predefined::integer_type) ? "I"
                : (ctx->expr()->type == Predefined::real_type)    ? "F"
                :                                                   "?";

    // Emit a field put instruction.
    j_file << "\tputstatic\t" << program_name
           << "/" << ctx->variable()->ID()->toString()
           << " " << type_indicator << endl;

    return value;
}

antlrcpp::Any CloudsPass2Visitor::visitAdd_Sub_op(CloudsParser::Add_sub_opContext *ctx)
{
    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
                        && (type2 == Predefined::real_type);

    string op = ctx->add_sub_op()->getText();
    string opcode;

    if (op == "+")
    {
        opcode = integer_mode ? "iadd"
               : real_mode    ? "fadd"
               :                "????";
    }
    else
    {
        opcode = integer_mode ? "isub"
               : real_mode    ? "fsub"
               :                "????";
    }

    // Emit an add or subtract instruction.
    j_file << "\t" << opcode << endl;

    return value;
}

antlrcpp::Any CloudsPass2Visitor::visitMul_div_op(CloudsParser::Mul_div_opContext *ctx)
{
    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
                        && (type2 == Predefined::real_type);

    string op = ctx->mul_div_op()->getText();
    string opcode;

    if (op == "+")
    {
        opcode = integer_mode ? "imul"
               : real_mode    ? "fmul"
               :                "????";
    }
    else
    {
        opcode = integer_mode ? "idiv"
               : real_mode    ? "fdiv"
               :                "????";
    }

    // Emit an add or subtract instruction.
    j_file << "\t" << opcode << endl;

    return value;
}

antlrcpp::Any Pass2Visitor::visitIf_stmt(CloudsParser::If_stmtContext *ctx)
{
    auto value = visitChildren(ctx->expr());
    auto value2 = visitChildren(ctx->stat());

    string type_indicator = 
                  (ctx->expr()->type == Predefined::integer_type) ? "I"
                | (ctx->expr()->type == Predefined::real_type)    ? "F"
                |                                                   "?";

    j_file  << "\tgetstatic\t" << program_name
            << "/" << ctx->variable()->ID()->toString()
            << " " << type_indicator << endl; 
    j_file  << "\tgetstatic\t" << program_name
            << "/" << ctx->variable()->ID()->toString()
            << " " << type_indicator << endl; 
    j_file  << "\ticonst_0\t" << endl
            << "\tgoto\tL003";
    j_file  << "L002:" << endl << "\ticonst_1\t" << endl
            << "L003:" << endl << "\tifeq\tL001" << endl; 
}