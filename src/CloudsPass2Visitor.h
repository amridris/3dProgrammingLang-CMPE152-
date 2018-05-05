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
	string current_environment_name;
	ostream& j_file;

public:
	CloudsPass2Visitor(ostream& j_file);
    virtual ~CloudsPass2Visitor();

	antlrcpp::Any visitProgram(CloudsParser::ProgramContext *ctx) override;
    antlrcpp::Any visitHeader(CloudsParser::HeaderContext *ctx) override;
	antlrcpp::Any visitBlock(CloudsParser::BlockContext *context) override;
    antlrcpp::Any visitEnvironments(CloudsParser::EnvironmentsContext *ctx) override;	
	antlrcpp::Any visitStat(CloudsParser::StatContext *ctx) override;
	antlrcpp::Any visitAssignment_stmt(CloudsParser::Assignment_stmtContext *ctx) override;
	antlrcpp::Any visitAdd_sub_op(CloudsParser::Add_sub_opContext *ctx) override;
	antlrcpp::Any visitMul_div_op(CloudsParser::mul_div_opContext *ctx) override;
	antlrcpp::Any visitIf_stmt(CloudsParser::If_stmtContext *ctx) override;


};

#endif /* CLOUDSPASS2VISITOR_H_ */
