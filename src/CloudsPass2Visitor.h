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
	string var_name; //take out when symbol table support is complete
	string jas_type;
	string init_param;
	int func_locals;
	size_t var_size = 0;

public:
	CloudsPass2Visitor(ostream& j_file);
    virtual ~CloudsPass2Visitor();

	antlrcpp::Any visitProgram(CloudsParser::ProgramContext *ctx) override;
    antlrcpp::Any visitHeader(CloudsParser::HeaderContext *ctx) override;
	antlrcpp::Any visitFunction(CloudsParser::FunctionContext *ctx) override;
	antlrcpp::Any visitFunctionInit(CloudsParser::FunctionInitContext *ctx) override;
	antlrcpp::Any visitBody(CloudsParser::BodyContext *ctx) override;
	antlrcpp::Any visitBlock(CloudsParser::BlockContext *ctx) override;
    antlrcpp::Any visitEnvironments(CloudsParser::EnvironmentsContext *ctx) override;
	antlrcpp::Any visitRun_simulation(CloudsParser::Run_simulationContext *ctx) override;	
	antlrcpp::Any visitStat(CloudsParser::StatContext *ctx) override;
	antlrcpp::Any visitAssignment_stmt(CloudsParser::Assignment_stmtContext *ctx) override;
	antlrcpp::Any visitInit_stmt(CloudsParser::Init_stmtContext *ctx) override;
	antlrcpp::Any visitInit_list(CloudsParser::Init_listContext *ctx) override;
	antlrcpp::Any visitObj_vars(CloudsParser::Obj_varsContext *ctx) override;
	antlrcpp::Any visitPut_stmt(CloudsParser::Put_stmtContext *ctx) override;
	antlrcpp::Any visitWait_stmt(CloudsParser::Wait_stmtContext *ctx) override;
	antlrcpp::Any visitMove_stmt(CloudsParser::Move_stmtContext *ctx) override;
	antlrcpp::Any visitRotation_stmt(CloudsParser::Rotation_stmtContext *ctx) override;


	antlrcpp::Any visitIntegerConst(CloudsParser::IntegerConstContext *ctx) override;
	antlrcpp::Any visitExprvariable(CloudsParser::ExprvariableContext *ctx) override;
	//DO NOT IMPLEMENT visitVaraible
/*
	antlrcpp::Any visitAdd_sub_op(CloudsParser::Add_sub_opContext *ctx) override;
	antlrcpp::Any visitMul_div_op(CloudsParser::Mul_div_opContext *ctx) override;
	antlrcpp::Any visitIf_stmt(CloudsParser::If_stmtContext *ctx) override;
	antlrcpp::Any visitRepeat_stmt(CloudsParser::Repeat_stmtContext *ctx) override;
	antlrcpp::Any visitRel_op(CloudsParser::Rel_opContext *ctx) override;
	antlrcpp::Any visitStmt_list(CloudsParser::Stmt_listContext *ctx) override;
*/
};

#endif /* CLOUDSPASS2VISITOR_H_ */
