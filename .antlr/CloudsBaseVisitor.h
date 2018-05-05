
// Generated from /Users/anahit/Documents/GitLocalRepo/cmpe152newlanguage/Clouds.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "CloudsVisitor.h"


/**
 * This class provides an empty implementation of CloudsVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CloudsBaseVisitor : public CloudsVisitor {
public:

  virtual antlrcpp::Any visitProgram(CloudsParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHeader(CloudsParser::HeaderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(CloudsParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnvironments(CloudsParser::EnvironmentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRun_simulation(CloudsParser::Run_simulationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitScope(CloudsParser::ScopeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmt_list(CloudsParser::Stmt_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignmentStmt(CloudsParser::AssignmentStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_(CloudsParser::Function_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepeatStmt(CloudsParser::RepeatStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStmt(CloudsParser::IfStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhenStmt(CloudsParser::WhenStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintStmt(CloudsParser::PrintStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPutStmt(CloudsParser::PutStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMoveStmt(CloudsParser::MoveStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPause(CloudsParser::PauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWaitStmt(CloudsParser::WaitStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCollisionStmt(CloudsParser::CollisionStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment_stmt(CloudsParser::Assignment_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepeat_stmt(CloudsParser::Repeat_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_stmt(CloudsParser::If_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPut_stmt(CloudsParser::Put_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCollision_stmt(CloudsParser::Collision_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWait_stmt(CloudsParser::Wait_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMove_stmt(CloudsParser::Move_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhen_stmt(CloudsParser::When_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrint_stmt(CloudsParser::Print_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(CloudsParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(CloudsParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitList(CloudsParser::InitListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParens(CloudsParser::ParensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddSubExpr(CloudsParser::AddSubExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumberConst(CloudsParser::NumberConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRotExpr(CloudsParser::RotExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelExpr(CloudsParser::RelExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulDivExpr(CloudsParser::MulDivExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInit_list(CloudsParser::Init_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInit_var(CloudsParser::Init_varContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitObj_vars(CloudsParser::Obj_varsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction(CloudsParser::FunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncName(CloudsParser::FuncNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgumentList(CloudsParser::ArgumentListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethodCallArguments(CloudsParser::MethodCallArgumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethodCall_ref(CloudsParser::MethodCall_refContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumber(CloudsParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSign(CloudsParser::SignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment_operators(CloudsParser::Assignment_operatorsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMul_div_op(CloudsParser::Mul_div_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd_sub_op(CloudsParser::Add_sub_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRel_op(CloudsParser::Rel_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRot_op(CloudsParser::Rot_opContext *ctx) override {
    return visitChildren(ctx);
  }


};

