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

    string program_name = ctx->ID()->toString();

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

<<<<<<< HEAD
=======

antlrcpp::Any CloudsPass1Visitor::visitEnvironments(CloudsParser::EnvironmentsContext *ctx)
{
    j_file << ".field private static "
               << ctx->ID()->toString() << " " << "[[[I" << endl;
}
>>>>>>> 3a7e765b3e7e92084e8b454afd0da3393f83b525
