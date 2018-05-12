#include <iostream>
#include <string>
#include <vector>

#include "CloudsPass1Visitor.h"
#include "wci/intermediate/SymTabFactory.h"
#include "wci/intermediate/symtabimpl/Predefined.h"
#include "wci/util/CrossReferencer.h"

using namespace std;
using namespace wci;
using namespace wci::intermediate;
using namespace wci::intermediate::symtabimpl;
using namespace wci::util;

CloudsPass1Visitor::CloudsPass1Visitor()
    : program_id(nullptr), j_file(nullptr)
{
    // Create and initialize the symbol table stack.
    symtab_stack = SymTabFactory::create_symtab_stack();
    Predefined::initialize(symtab_stack);

    //cout << "=== Pass1Visitor(): symtab stack initialized." << endl;
}

CloudsPass1Visitor::~CloudsPass1Visitor() {}

ostream& CloudsPass1Visitor::get_assembly_file() { return j_file; }

antlrcpp::Any CloudsPass1Visitor::visitProgram(CloudsParser::ProgramContext *ctx)
{
    auto value = visitChildren(ctx);
    

//    cout << "=== visitProgram: Printing xref table." << endl;

    // Print the cross-reference table.
    CrossReferencer cross_referencer;
    cross_referencer.print(symtab_stack);

    return value;
}

antlrcpp::Any CloudsPass1Visitor::visitHeader(CloudsParser::HeaderContext *ctx)
{
//    cout << "=== visitHeader: " + ctx->getText() << endl;

    string program_name = "collisionengine/" + ctx->ID()->toString();

    program_id = symtab_stack->enter_local(program_name);
    program_id->set_definition((Definition)DF_PROGRAM);
    program_id->set_attribute((SymTabKey) ROUTINE_SYMTAB,
                              new EntryValue(symtab_stack->push()));
    symtab_stack->set_program_id(program_id);

    // Create the assembly output file.
    j_file.open(program_name + ".j");
    if (j_file.fail())
    {
            cout << "***** Cannot open assembly file." << endl;
            exit(-99);
    }

    // Emit the program header.
    j_file << ".class public " << program_name << endl;
    j_file << ".super java/lang/Object" << endl;

    // Emit the RunTimer and PascalTextIn fields.
    j_file << endl;
    j_file << ".field private static _runTimer LRunTimer;" << endl;
    j_file << ".field private static _standardIn LPascalTextIn;" << endl;

    return visitChildren(ctx);
}

antlrcpp::Any CloudsPass1Visitor::visitBody(CloudsParser::BodyContext *ctx)
{
     auto value = visitChildren(ctx);

    // Emit the class constructor.
    j_file << endl;
    j_file << ".method public <init>()V" << endl;
    j_file << endl;
    j_file << "\taload_0" << endl;
    j_file << "\tinvokenonvirtual    java/lang/Object/<init>()V" << endl;
    j_file << "\treturn" << endl;
    j_file << endl;
    j_file << ".limit locals 1" << endl;
    j_file << ".limit stack 1" << endl;
    j_file << ".end method" << endl;

    return value;
}


antlrcpp::Any CloudsPass1Visitor::visitEnvironments(CloudsParser::EnvironmentsContext *ctx)
{
    //change to dynamic if this doesn't work
    j_file << ".field private static "
               << ctx->ID()->toString() << "Engine " << "Lcollisionengine/CollisionEngine;" << endl;
    return visitChildren(ctx);
}


antlrcpp::Any CloudsPass1Visitor::visitInit_var(CloudsParser::Init_varContext *ctx)
{

    //init_var = TYPE and ID

    //TYPE
    string var_type = ctx->TYPE()->toString();
    string jas_type;
    if(var_type == "cube"){
        jas_type = "[I";
    }
    //SPhere has radius
    else if(var_type == "sphere"){
        jas_type = "[I"; //array (not sure)
    }
    //cylinder (radius, height)
    else if(var_type == "cylinder"){
        jas_type = "[I"; //array (not sure)
    }
    else if(var_type == "tetra"){
        jas_type = "[I"; //array (not sure)
    }
    else if(var_type == "point"){
       jas_type = "[I"; //array (not sure)
    }
    else if(var_type == "int"){
        jas_type = "I"; //integer
    }
    else if(var_type == "float"){
        jas_type = "F"; //float 
    }
    else{
        jas_type = "?"; //nullptr
    }

    //jasmin code
     j_file << ".field private static "
               << ctx->ID()->toString() << " " << jas_type << endl;
    j_file << ".field private static "
               << ctx->ID()->toString() << "center " << "[I" << endl;
    
    //parsing identifiers and placing it in the system table
    string variable_name = ctx->ID()->toString();
    SymTabEntry *variable_id = symtab_stack->enter_local(variable_name);
    variable_id->set_definition((Definition)DF_VARIABLE);
    variable_id_list.push_back(variable_id);


    return visitChildren(ctx);
}

antlrcpp::Any CloudsPass1Visitor::visitAddSubExpr(CloudsParser::AddSubExprContext *ctx){

    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
                        && (type2 == Predefined::real_type);

    TypeSpec *type = integer_mode ? Predefined::integer_type
                   : real_mode    ? Predefined::real_type
                   :                nullptr;
    ctx->type = type;

    return value;
}

antlrcpp::Any CloudsPass1Visitor::visitMulDivExpr(CloudsParser::MulDivExprContext *ctx){

     auto value = visitChildren(ctx);

    //check the expr type
    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    //type checking if both nodes are of same type
    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
                        && (type2 == Predefined::real_type);

    TypeSpec *type = integer_mode ? Predefined::integer_type
                   : real_mode    ? Predefined::real_type
                   :                nullptr;

    //set the type
    ctx->type = type;

    return value;
}

antlrcpp::Any CloudsPass1Visitor::visitRelExpr(CloudsParser::RelExprContext *ctx){

       auto value = visitChildren(ctx);

    //check the expr type
    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    //type checking if both nodes are of same type
    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
                        && (type2 == Predefined::real_type);

    TypeSpec *type = integer_mode ? Predefined::integer_type
                   : real_mode    ? Predefined::real_type
                   :                nullptr;

    //set the type
    ctx->type = type;

    return value;
}

antlrcpp::Any CloudsPass1Visitor::visitRotExpr(CloudsParser::RotExprContext *ctx){

       auto value = visitChildren(ctx);

    //check the expr type
    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    //type checking if both nodes are of same type
    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
                        && (type2 == Predefined::real_type);

    TypeSpec *type = integer_mode ? Predefined::integer_type
                   : real_mode    ? Predefined::real_type
                   :                nullptr;

    //set the type
    ctx->type = type;

    return value;
}



antlrcpp::Any CloudsPass1Visitor::visitSignedNumberConst(CloudsParser::SignedNumberConstContext *ctx){


    auto value = visitChildren(ctx);
    ctx->type = ctx->signedNumber()->type;
    return value;
    

}
antlrcpp::Any CloudsPass1Visitor::visitSignedNumber(CloudsParser::SignedNumberContext *ctx){

     auto value = visit(ctx->number());
    ctx->type = ctx->number()->type;
    return value;
}

antlrcpp::Any CloudsPass1Visitor::visitNumberConst(CloudsParser::NumberConstContext *ctx){

    auto value = visit(ctx->number());
    ctx->type = ctx->number()->type;
    return value;

}

antlrcpp::Any CloudsPass1Visitor::visitIntegerConst(CloudsParser::IntegerConstContext *ctx){

    ctx->type = Predefined::integer_type;
    return visitChildren(ctx);

}

antlrcpp::Any CloudsPass1Visitor::visitFloatConst(CloudsParser::FloatConstContext *ctx){
    ctx->type = Predefined::real_type;
    return visitChildren(ctx);
}

antlrcpp::Any CloudsPass1Visitor::visitParens(CloudsParser::ParensContext *ctx){
    auto value = visitChildren(ctx);
    ctx->type = ctx->expr()->type;
    return value;
}
