#ifndef CLOUDSPASS1VISITOR_H_
#define CLOUDSPASS1VISITOR_H_

#include <iostream>

#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"

#include "CloudsBaseVisitor.h"
#include "antlr4-runtime.h"
#include "CloudsVisitor.h"

using namespace wci;
using namespace wci::intermediate;

class CloudsPass1Visitor : public CloudsBaseVisitor
{
private:
    SymTabStack *symtab_stack;
    SymTabEntry *program_id;
    vector<SymTabEntry *> variable_id_list;
    ofstream j_file;

public:
    CloudsPass1Visitor();
    virtual ~CloudsPass1Visitor();

    ostream& get_assembly_file();

    antlrcpp::Any visitProgram(CloudsParser::ProgramContext *context);
    antlrcpp::Any visitHeader(CloudsParser::HeaderContext *context);
    
};

#endif /* CLOUDSPASS1VISITOR_H_ */
