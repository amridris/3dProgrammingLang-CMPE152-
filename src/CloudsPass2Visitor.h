#ifndef CLOUDSPASS2VISITOR_H_
#define CLOUDSPASS2VISITOR_H_

#include <iostream>
#include <string>

#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"

#include "CloudsBaseVisitor.h"
#include "antlr4-runtime.h"
#include "CloudsVisitor.h"

using namespace wci;
using namespace wci::intermediate;

class CloudsPass2Visitor : public CloudsBaseVisitor
{
private:
	string program_name;
	ostream& j_file;

public:
	CloudsPass2Visitor(ostream& j_file);
    virtual ~CloudsPass2Visitor();

	antlrcpp::Any visitProgram(CloudsParser::ProgramContext *ctx);
    antlrcpp::Any visitHeader(CloudsParser::HeaderContext *ctx);
	antlrcpp::Any visitStat(CloudsParser::StatContext *ctx);
	antlrcpp::Any visitAssignment_stmt(CloudsParser::Assignment_stmtContext *ctx);
	antlrcpp::Any visitAdd_Sub_op(CloudsParser::Add_Sub_opContext *ctx);
	antlrcpp::Any visitMul_div_op(CloudsParser::Mul_div_opContext *ctx);
	antlrcpp::Any visitIf_stmt(CloudsParser::If_stmtContext *ctx);
};

#endif /* CLOUDSPASS2VISITOR_H_ */
