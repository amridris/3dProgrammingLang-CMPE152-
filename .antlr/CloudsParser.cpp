
// Generated from d:\UbuntuFiles\CMPE152Ubuntu\cmpe152newlanguage\Clouds.g4 by ANTLR 4.7.1


#include "CloudsListener.h"
#include "CloudsVisitor.h"

#include "CloudsParser.h"


using namespace antlrcpp;
using namespace antlr4;

CloudsParser::CloudsParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

CloudsParser::~CloudsParser() {
  delete _interpreter;
}

std::string CloudsParser::getGrammarFileName() const {
  return "Clouds.g4";
}

const std::vector<std::string>& CloudsParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& CloudsParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

CloudsParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CloudsParser::HeaderContext* CloudsParser::ProgramContext::header() {
  return getRuleContext<CloudsParser::HeaderContext>(0);
}

std::vector<CloudsParser::BlockContext *> CloudsParser::ProgramContext::block() {
  return getRuleContexts<CloudsParser::BlockContext>();
}

CloudsParser::BlockContext* CloudsParser::ProgramContext::block(size_t i) {
  return getRuleContext<CloudsParser::BlockContext>(i);
}

CloudsParser::Run_simulationContext* CloudsParser::ProgramContext::run_simulation() {
  return getRuleContext<CloudsParser::Run_simulationContext>(0);
}


size_t CloudsParser::ProgramContext::getRuleIndex() const {
  return CloudsParser::RuleProgram;
}

void CloudsParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void CloudsParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


antlrcpp::Any CloudsParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

CloudsParser::ProgramContext* CloudsParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, CloudsParser::RuleProgram);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(68);
    header();
    setState(69);
    block();
    setState(70);
    run_simulation();
    setState(71);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HeaderContext ------------------------------------------------------------------

CloudsParser::HeaderContext::HeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CloudsParser::HeaderContext::CLOUDS() {
  return getToken(CloudsParser::CLOUDS, 0);
}

tree::TerminalNode* CloudsParser::HeaderContext::ID() {
  return getToken(CloudsParser::ID, 0);
}

tree::TerminalNode* CloudsParser::HeaderContext::SEMICOLON() {
  return getToken(CloudsParser::SEMICOLON, 0);
}


size_t CloudsParser::HeaderContext::getRuleIndex() const {
  return CloudsParser::RuleHeader;
}

void CloudsParser::HeaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHeader(this);
}

void CloudsParser::HeaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHeader(this);
}


antlrcpp::Any CloudsParser::HeaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitHeader(this);
  else
    return visitor->visitChildren(this);
}

CloudsParser::HeaderContext* CloudsParser::header() {
  HeaderContext *_localctx = _tracker.createInstance<HeaderContext>(_ctx, getState());
  enterRule(_localctx, 2, CloudsParser::RuleHeader);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
    match(CloudsParser::CLOUDS);
    setState(74);
    match(CloudsParser::ID);
    setState(75);
    match(CloudsParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

CloudsParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CloudsParser::EnvironmentsContext* CloudsParser::BlockContext::environments() {
  return getRuleContext<CloudsParser::EnvironmentsContext>(0);
}

CloudsParser::FunctionContext* CloudsParser::BlockContext::function() {
  return getRuleContext<CloudsParser::FunctionContext>(0);
}


size_t CloudsParser::BlockContext::getRuleIndex() const {
  return CloudsParser::RuleBlock;
}

void CloudsParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void CloudsParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


antlrcpp::Any CloudsParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

CloudsParser::BlockContext* CloudsParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 4, CloudsParser::RuleBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(79);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CloudsParser::ENVIRONMENT: {
        enterOuterAlt(_localctx, 1);
        setState(77);
        environments();
        break;
      }

      case CloudsParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(78);
        function();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnvironmentsContext ------------------------------------------------------------------

CloudsParser::EnvironmentsContext::EnvironmentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CloudsParser::EnvironmentsContext::ENVIRONMENT() {
  return getToken(CloudsParser::ENVIRONMENT, 0);
}

tree::TerminalNode* CloudsParser::EnvironmentsContext::ID() {
  return getToken(CloudsParser::ID, 0);
}

CloudsParser::ScopeContext* CloudsParser::EnvironmentsContext::scope() {
  return getRuleContext<CloudsParser::ScopeContext>(0);
}


size_t CloudsParser::EnvironmentsContext::getRuleIndex() const {
  return CloudsParser::RuleEnvironments;
}

void CloudsParser::EnvironmentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnvironments(this);
}

void CloudsParser::EnvironmentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnvironments(this);
}


antlrcpp::Any CloudsParser::EnvironmentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitEnvironments(this);
  else
    return visitor->visitChildren(this);
}

CloudsParser::EnvironmentsContext* CloudsParser::environments() {
  EnvironmentsContext *_localctx = _tracker.createInstance<EnvironmentsContext>(_ctx, getState());
  enterRule(_localctx, 6, CloudsParser::RuleEnvironments);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    match(CloudsParser::ENVIRONMENT);
    setState(82);
    match(CloudsParser::ID);
    setState(83);
    scope();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Run_simulationContext ------------------------------------------------------------------

CloudsParser::Run_simulationContext::Run_simulationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CloudsParser::Run_simulationContext::SIMULATION() {
  return getToken(CloudsParser::SIMULATION, 0);
}

CloudsParser::ScopeContext* CloudsParser::Run_simulationContext::scope() {
  return getRuleContext<CloudsParser::ScopeContext>(0);
}


size_t CloudsParser::Run_simulationContext::getRuleIndex() const {
  return CloudsParser::RuleRun_simulation;
}

void CloudsParser::Run_simulationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRun_simulation(this);
}

void CloudsParser::Run_simulationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRun_simulation(this);
}


antlrcpp::Any CloudsParser::Run_simulationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitRun_simulation(this);
  else
    return visitor->visitChildren(this);
}

CloudsParser::Run_simulationContext* CloudsParser::run_simulation() {
  Run_simulationContext *_localctx = _tracker.createInstance<Run_simulationContext>(_ctx, getState());
  enterRule(_localctx, 8, CloudsParser::RuleRun_simulation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(85);
    match(CloudsParser::SIMULATION);
    setState(86);
    scope();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScopeContext ------------------------------------------------------------------

CloudsParser::ScopeContext::ScopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CloudsParser::Stmt_listContext* CloudsParser::ScopeContext::stmt_list() {
  return getRuleContext<CloudsParser::Stmt_listContext>(0);
}


size_t CloudsParser::ScopeContext::getRuleIndex() const {
  return CloudsParser::RuleScope;
}

void CloudsParser::ScopeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScope(this);
}

void CloudsParser::ScopeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScope(this);
}


antlrcpp::Any CloudsParser::ScopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitScope(this);
  else
    return visitor->visitChildren(this);
}

CloudsParser::ScopeContext* CloudsParser::scope() {
  ScopeContext *_localctx = _tracker.createInstance<ScopeContext>(_ctx, getState());
  enterRule(_localctx, 10, CloudsParser::RuleScope);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(88);
    match(CloudsParser::T__0);
    setState(89);
    stmt_list();
    setState(90);
    match(CloudsParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Stmt_listContext ------------------------------------------------------------------

CloudsParser::Stmt_listContext::Stmt_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CloudsParser::StatContext *> CloudsParser::Stmt_listContext::stat() {
  return getRuleContexts<CloudsParser::StatContext>();
}

CloudsParser::StatContext* CloudsParser::Stmt_listContext::stat(size_t i) {
  return getRuleContext<CloudsParser::StatContext>(i);
}

std::vector<tree::TerminalNode *> CloudsParser::Stmt_listContext::SEMICOLON() {
  return getTokens(CloudsParser::SEMICOLON);
}

tree::TerminalNode* CloudsParser::Stmt_listContext::SEMICOLON(size_t i) {
  return getToken(CloudsParser::SEMICOLON, i);
}


size_t CloudsParser::Stmt_listContext::getRuleIndex() const {
  return CloudsParser::RuleStmt_list;
}

void CloudsParser::Stmt_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt_list(this);
}

void CloudsParser::Stmt_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt_list(this);
}


antlrcpp::Any CloudsParser::Stmt_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitStmt_list(this);
  else
    return visitor->visitChildren(this);
}

CloudsParser::Stmt_listContext* CloudsParser::stmt_list() {
  Stmt_listContext *_localctx = _tracker.createInstance<Stmt_listContext>(_ctx, getState());
  enterRule(_localctx, 12, CloudsParser::RuleStmt_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(92);
    stat();
    setState(93);
    match(CloudsParser::SEMICOLON);
    setState(99);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(94);
        stat();
        setState(95);
        match(CloudsParser::SEMICOLON); 
      }
      setState(101);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

CloudsParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CloudsParser::StatContext::getRuleIndex() const {
  return CloudsParser::RuleStat;
}

void CloudsParser::StatContext::copyFrom(StatContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- WhenStmtContext ------------------------------------------------------------------

CloudsParser::When_stmtContext* CloudsParser::WhenStmtContext::when_stmt() {
  return getRuleContext<CloudsParser::When_stmtContext>(0);
}

CloudsParser::WhenStmtContext::WhenStmtContext(StatContext *ctx) { copyFrom(ctx); }

void CloudsParser::WhenStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhenStmt(this);
}
void CloudsParser::WhenStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhenStmt(this);
}

antlrcpp::Any CloudsParser::WhenStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitWhenStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrintStmtContext ------------------------------------------------------------------

CloudsParser::Print_stmtContext* CloudsParser::PrintStmtContext::print_stmt() {
  return getRuleContext<CloudsParser::Print_stmtContext>(0);
}

CloudsParser::PrintStmtContext::PrintStmtContext(StatContext *ctx) { copyFrom(ctx); }

void CloudsParser::PrintStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintStmt(this);
}
void CloudsParser::PrintStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintStmt(this);
}

antlrcpp::Any CloudsParser::PrintStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitPrintStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WaitStmtContext ------------------------------------------------------------------

CloudsParser::Wait_stmtContext* CloudsParser::WaitStmtContext::wait_stmt() {
  return getRuleContext<CloudsParser::Wait_stmtContext>(0);
}

CloudsParser::WaitStmtContext::WaitStmtContext(StatContext *ctx) { copyFrom(ctx); }

void CloudsParser::WaitStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWaitStmt(this);
}
void CloudsParser::WaitStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWaitStmt(this);
}

antlrcpp::Any CloudsParser::WaitStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitWaitStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfStmtContext ------------------------------------------------------------------

CloudsParser::If_stmtContext* CloudsParser::IfStmtContext::if_stmt() {
  return getRuleContext<CloudsParser::If_stmtContext>(0);
}

CloudsParser::IfStmtContext::IfStmtContext(StatContext *ctx) { copyFrom(ctx); }

void CloudsParser::IfStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStmt(this);
}
void CloudsParser::IfStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStmt(this);
}

antlrcpp::Any CloudsParser::IfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitIfStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CollisionStmtContext ------------------------------------------------------------------

CloudsParser::Collision_stmtContext* CloudsParser::CollisionStmtContext::collision_stmt() {
  return getRuleContext<CloudsParser::Collision_stmtContext>(0);
}

CloudsParser::CollisionStmtContext::CollisionStmtContext(StatContext *ctx) { copyFrom(ctx); }

void CloudsParser::CollisionStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCollisionStmt(this);
}
void CloudsParser::CollisionStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCollisionStmt(this);
}

antlrcpp::Any CloudsParser::CollisionStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitCollisionStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Function_Context ------------------------------------------------------------------

CloudsParser::FunctionContext* CloudsParser::Function_Context::function() {
  return getRuleContext<CloudsParser::FunctionContext>(0);
}

CloudsParser::Function_Context::Function_Context(StatContext *ctx) { copyFrom(ctx); }

void CloudsParser::Function_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_(this);
}
void CloudsParser::Function_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_(this);
}

antlrcpp::Any CloudsParser::Function_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitFunction_(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PutStmtContext ------------------------------------------------------------------

CloudsParser::Put_stmtContext* CloudsParser::PutStmtContext::put_stmt() {
  return getRuleContext<CloudsParser::Put_stmtContext>(0);
}

CloudsParser::PutStmtContext::PutStmtContext(StatContext *ctx) { copyFrom(ctx); }

void CloudsParser::PutStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPutStmt(this);
}
void CloudsParser::PutStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPutStmt(this);
}

antlrcpp::Any CloudsParser::PutStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitPutStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignmentStmtContext ------------------------------------------------------------------

CloudsParser::Assignment_stmtContext* CloudsParser::AssignmentStmtContext::assignment_stmt() {
  return getRuleContext<CloudsParser::Assignment_stmtContext>(0);
}

CloudsParser::AssignmentStmtContext::AssignmentStmtContext(StatContext *ctx) { copyFrom(ctx); }

void CloudsParser::AssignmentStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentStmt(this);
}
void CloudsParser::AssignmentStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentStmt(this);
}

antlrcpp::Any CloudsParser::AssignmentStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitAssignmentStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RepeatStmtContext ------------------------------------------------------------------

CloudsParser::Repeat_stmtContext* CloudsParser::RepeatStmtContext::repeat_stmt() {
  return getRuleContext<CloudsParser::Repeat_stmtContext>(0);
}

CloudsParser::RepeatStmtContext::RepeatStmtContext(StatContext *ctx) { copyFrom(ctx); }

void CloudsParser::RepeatStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRepeatStmt(this);
}
void CloudsParser::RepeatStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRepeatStmt(this);
}

antlrcpp::Any CloudsParser::RepeatStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitRepeatStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PauseContext ------------------------------------------------------------------

tree::TerminalNode* CloudsParser::PauseContext::PAUSE() {
  return getToken(CloudsParser::PAUSE, 0);
}

CloudsParser::PauseContext::PauseContext(StatContext *ctx) { copyFrom(ctx); }

void CloudsParser::PauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPause(this);
}
void CloudsParser::PauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPause(this);
}

antlrcpp::Any CloudsParser::PauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitPause(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MoveStmtContext ------------------------------------------------------------------

CloudsParser::Move_stmtContext* CloudsParser::MoveStmtContext::move_stmt() {
  return getRuleContext<CloudsParser::Move_stmtContext>(0);
}

CloudsParser::MoveStmtContext::MoveStmtContext(StatContext *ctx) { copyFrom(ctx); }

void CloudsParser::MoveStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMoveStmt(this);
}
void CloudsParser::MoveStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMoveStmt(this);
}

antlrcpp::Any CloudsParser::MoveStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitMoveStmt(this);
  else
    return visitor->visitChildren(this);
}
CloudsParser::StatContext* CloudsParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 14, CloudsParser::RuleStat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(113);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<CloudsParser::AssignmentStmtContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(102);
      assignment_stmt();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<CloudsParser::Function_Context>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(103);
      function();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<CloudsParser::RepeatStmtContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(104);
      repeat_stmt();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<CloudsParser::IfStmtContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(105);
      if_stmt();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<CloudsParser::WhenStmtContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(106);
      when_stmt();
      break;
    }

    case 6: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<CloudsParser::PrintStmtContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(107);
      print_stmt();
      break;
    }

    case 7: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<CloudsParser::PutStmtContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(108);
      put_stmt();
      break;
    }

    case 8: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<CloudsParser::MoveStmtContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(109);
      move_stmt();
      break;
    }

    case 9: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<CloudsParser::PauseContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(110);
      match(CloudsParser::PAUSE);
      break;
    }

    case 10: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<CloudsParser::WaitStmtContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(111);
      wait_stmt();
      break;
    }

    case 11: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<CloudsParser::CollisionStmtContext>(_localctx));
      enterOuterAlt(_localctx, 11);
      setState(112);
      collision_stmt();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assignment_stmtContext ------------------------------------------------------------------

CloudsParser::Assignment_stmtContext::Assignment_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CloudsParser::VariableContext* CloudsParser::Assignment_stmtContext::variable() {
  return getRuleContext<CloudsParser::VariableContext>(0);
}

CloudsParser::Assignment_operatorsContext* CloudsParser::Assignment_stmtContext::assignment_operators() {
  return getRuleContext<CloudsParser::Assignment_operatorsContext>(0);
}

CloudsParser::ExprContext* CloudsParser::Assignment_stmtContext::expr() {
  return getRuleContext<CloudsParser::ExprContext>(0);
}

CloudsParser::Init_varContext* CloudsParser::Assignment_stmtContext::init_var() {
  return getRuleContext<CloudsParser::Init_varContext>(0);
}


size_t CloudsParser::Assignment_stmtContext::getRuleIndex() const {
  return CloudsParser::RuleAssignment_stmt;
}

void CloudsParser::Assignment_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment_stmt(this);
}

void CloudsParser::Assignment_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment_stmt(this);
}


antlrcpp::Any CloudsParser::Assignment_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitAssignment_stmt(this);
  else
    return visitor->visitChildren(this);
}

CloudsParser::Assignment_stmtContext* CloudsParser::assignment_stmt() {
  Assignment_stmtContext *_localctx = _tracker.createInstance<Assignment_stmtContext>(_ctx, getState());
  enterRule(_localctx, 16, CloudsParser::RuleAssignment_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(123);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(115);
      variable(0);
      setState(116);
      assignment_operators();
      setState(117);
      expr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(119);
      init_var();
      setState(120);
      assignment_operators();
      setState(121);
      expr(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Repeat_stmtContext ------------------------------------------------------------------

CloudsParser::Repeat_stmtContext::Repeat_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CloudsParser::Repeat_stmtContext::REPEAT() {
  return getToken(CloudsParser::REPEAT, 0);
}

CloudsParser::Stmt_listContext* CloudsParser::Repeat_stmtContext::stmt_list() {
  return getRuleContext<CloudsParser::Stmt_listContext>(0);
}

tree::TerminalNode* CloudsParser::Repeat_stmtContext::UNTIL() {
  return getToken(CloudsParser::UNTIL, 0);
}

CloudsParser::ExprContext* CloudsParser::Repeat_stmtContext::expr() {
  return getRuleContext<CloudsParser::ExprContext>(0);
}


size_t CloudsParser::Repeat_stmtContext::getRuleIndex() const {
  return CloudsParser::RuleRepeat_stmt;
}

void CloudsParser::Repeat_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRepeat_stmt(this);
}

void CloudsParser::Repeat_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRepeat_stmt(this);
}


antlrcpp::Any CloudsParser::Repeat_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitRepeat_stmt(this);
  else
    return visitor->visitChildren(this);
}

CloudsParser::Repeat_stmtContext* CloudsParser::repeat_stmt() {
  Repeat_stmtContext *_localctx = _tracker.createInstance<Repeat_stmtContext>(_ctx, getState());
  enterRule(_localctx, 18, CloudsParser::RuleRepeat_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    match(CloudsParser::REPEAT);
    setState(126);
    stmt_list();
    setState(127);
    match(CloudsParser::UNTIL);
    setState(128);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_stmtContext ------------------------------------------------------------------

CloudsParser::If_stmtContext::If_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CloudsParser::If_stmtContext::IF() {
  return getToken(CloudsParser::IF, 0);
}

CloudsParser::ExprContext* CloudsParser::If_stmtContext::expr() {
  return getRuleContext<CloudsParser::ExprContext>(0);
}

tree::TerminalNode* CloudsParser::If_stmtContext::THEN() {
  return getToken(CloudsParser::THEN, 0);
}

std::vector<CloudsParser::StatContext *> CloudsParser::If_stmtContext::stat() {
  return getRuleContexts<CloudsParser::StatContext>();
}

CloudsParser::StatContext* CloudsParser::If_stmtContext::stat(size_t i) {
  return getRuleContext<CloudsParser::StatContext>(i);
}

tree::TerminalNode* CloudsParser::If_stmtContext::ELSE() {
  return getToken(CloudsParser::ELSE, 0);
}


size_t CloudsParser::If_stmtContext::getRuleIndex() const {
  return CloudsParser::RuleIf_stmt;
}

void CloudsParser::If_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_stmt(this);
}

void CloudsParser::If_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_stmt(this);
}


antlrcpp::Any CloudsParser::If_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitIf_stmt(this);
  else
    return visitor->visitChildren(this);
}

CloudsParser::If_stmtContext* CloudsParser::if_stmt() {
  If_stmtContext *_localctx = _tracker.createInstance<If_stmtContext>(_ctx, getState());
  enterRule(_localctx, 20, CloudsParser::RuleIf_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(130);
    match(CloudsParser::IF);
    setState(131);
    expr(0);
    setState(132);
    match(CloudsParser::THEN);
    setState(133);
    stat();
    setState(136);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      setState(134);
      match(CloudsParser::ELSE);
      setState(135);
      stat();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Put_stmtContext ------------------------------------------------------------------

CloudsParser::Put_stmtContext::Put_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CloudsParser::Put_stmtContext::PUTNENV() {
  return getToken(CloudsParser::PUTNENV, 0);
}

std::vector<CloudsParser::VariableContext *> CloudsParser::Put_stmtContext::variable() {
  return getRuleContexts<CloudsParser::VariableContext>();
}

CloudsParser::VariableContext* CloudsParser::Put_stmtContext::variable(size_t i) {
  return getRuleContext<CloudsParser::VariableContext>(i);
}

tree::TerminalNode* CloudsParser::Put_stmtContext::CENTER() {
  return getToken(CloudsParser::CENTER, 0);
}

tree::TerminalNode* CloudsParser::Put_stmtContext::TYPE() {
  return getToken(CloudsParser::TYPE, 0);
}


size_t CloudsParser::Put_stmtContext::getRuleIndex() const {
  return CloudsParser::RulePut_stmt;
}

void CloudsParser::Put_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPut_stmt(this);
}

void CloudsParser::Put_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPut_stmt(this);
}


antlrcpp::Any CloudsParser::Put_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitPut_stmt(this);
  else
    return visitor->visitChildren(this);
}

CloudsParser::Put_stmtContext* CloudsParser::put_stmt() {
  Put_stmtContext *_localctx = _tracker.createInstance<Put_stmtContext>(_ctx, getState());
  enterRule(_localctx, 22, CloudsParser::RulePut_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(150);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(138);
      match(CloudsParser::PUTNENV);
      setState(139);
      variable(0);
      setState(140);
      match(CloudsParser::CENTER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(142);
      match(CloudsParser::PUTNENV);
      setState(143);
      variable(0);
      setState(144);
      match(CloudsParser::TYPE);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(146);
      match(CloudsParser::PUTNENV);
      setState(147);
      variable(0);
      setState(148);
      variable(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Collision_stmtContext ------------------------------------------------------------------

CloudsParser::Collision_stmtContext::Collision_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CloudsParser::Collision_stmtContext::COLISION() {
  return getToken(CloudsParser::COLISION, 0);
}

std::vector<CloudsParser::VariableContext *> CloudsParser::Collision_stmtContext::variable() {
  return getRuleContexts<CloudsParser::VariableContext>();
}

CloudsParser::VariableContext* CloudsParser::Collision_stmtContext::variable(size_t i) {
  return getRuleContext<CloudsParser::VariableContext>(i);
}

tree::TerminalNode* CloudsParser::Collision_stmtContext::BETWEEN() {
  return getToken(CloudsParser::BETWEEN, 0);
}


size_t CloudsParser::Collision_stmtContext::getRuleIndex() const {
  return CloudsParser::RuleCollision_stmt;
}

void CloudsParser::Collision_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCollision_stmt(this);
}

void CloudsParser::Collision_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCollision_stmt(this);
}


antlrcpp::Any CloudsParser::Collision_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitCollision_stmt(this);
  else
    return visitor->visitChildren(this);
}

CloudsParser::Collision_stmtContext* CloudsParser::collision_stmt() {
  Collision_stmtContext *_localctx = _tracker.createInstance<Collision_stmtContext>(_ctx, getState());
  enterRule(_localctx, 24, CloudsParser::RuleCollision_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152);
    match(CloudsParser::COLISION);
    setState(153);
    variable(0);
    setState(154);
    match(CloudsParser::BETWEEN);
    setState(155);
    variable(0);
    setState(156);
    variable(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Wait_stmtContext ------------------------------------------------------------------

CloudsParser::Wait_stmtContext::Wait_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CloudsParser::Wait_stmtContext::WAIT() {
  return getToken(CloudsParser::WAIT, 0);
}

CloudsParser::ExprContext* CloudsParser::Wait_stmtContext::expr() {
  return getRuleContext<CloudsParser::ExprContext>(0);
}


size_t CloudsParser::Wait_stmtContext::getRuleIndex() const {
  return CloudsParser::RuleWait_stmt;
}

void CloudsParser::Wait_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWait_stmt(this);
}

void CloudsParser::Wait_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWait_stmt(this);
}


antlrcpp::Any CloudsParser::Wait_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitWait_stmt(this);
  else
    return visitor->visitChildren(this);
}

CloudsParser::Wait_stmtContext* CloudsParser::wait_stmt() {
  Wait_stmtContext *_localctx = _tracker.createInstance<Wait_stmtContext>(_ctx, getState());
  enterRule(_localctx, 26, CloudsParser::RuleWait_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(158);
    match(CloudsParser::WAIT);
    setState(159);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Move_stmtContext ------------------------------------------------------------------

CloudsParser::Move_stmtContext::Move_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CloudsParser::Move_stmtContext::MOVE() {
  return getToken(CloudsParser::MOVE, 0);
}

std::vector<CloudsParser::ExprContext *> CloudsParser::Move_stmtContext::expr() {
  return getRuleContexts<CloudsParser::ExprContext>();
}

CloudsParser::ExprContext* CloudsParser::Move_stmtContext::expr(size_t i) {
  return getRuleContext<CloudsParser::ExprContext>(i);
}

tree::TerminalNode* CloudsParser::Move_stmtContext::TO() {
  return getToken(CloudsParser::TO, 0);
}

std::vector<tree::TerminalNode *> CloudsParser::Move_stmtContext::MOVE_3() {
  return getTokens(CloudsParser::MOVE_3);
}

tree::TerminalNode* CloudsParser::Move_stmtContext::MOVE_3(size_t i) {
  return getToken(CloudsParser::MOVE_3, i);
}


size_t CloudsParser::Move_stmtContext::getRuleIndex() const {
  return CloudsParser::RuleMove_stmt;
}

void CloudsParser::Move_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMove_stmt(this);
}

void CloudsParser::Move_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMove_stmt(this);
}


antlrcpp::Any CloudsParser::Move_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitMove_stmt(this);
  else
    return visitor->visitChildren(this);
}

CloudsParser::Move_stmtContext* CloudsParser::move_stmt() {
  Move_stmtContext *_localctx = _tracker.createInstance<Move_stmtContext>(_ctx, getState());
  enterRule(_localctx, 28, CloudsParser::RuleMove_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(161);
    match(CloudsParser::MOVE);
    setState(162);
    expr(0);
    setState(163);
    match(CloudsParser::TO);
    setState(164);
    expr(0);
    setState(165);
    match(CloudsParser::MOVE_3);
    setState(166);
    expr(0);
    setState(169);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CloudsParser::MOVE_3) {
      setState(167);
      match(CloudsParser::MOVE_3);
      setState(168);
      expr(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- When_stmtContext ------------------------------------------------------------------

CloudsParser::When_stmtContext::When_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CloudsParser::When_stmtContext::WHEN() {
  return getToken(CloudsParser::WHEN, 0);
}

CloudsParser::ExprContext* CloudsParser::When_stmtContext::expr() {
  return getRuleContext<CloudsParser::ExprContext>(0);
}

tree::TerminalNode* CloudsParser::When_stmtContext::THEN() {
  return getToken(CloudsParser::THEN, 0);
}

CloudsParser::StatContext* CloudsParser::When_stmtContext::stat() {
  return getRuleContext<CloudsParser::StatContext>(0);
}


size_t CloudsParser::When_stmtContext::getRuleIndex() const {
  return CloudsParser::RuleWhen_stmt;
}

void CloudsParser::When_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhen_stmt(this);
}

void CloudsParser::When_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhen_stmt(this);
}


antlrcpp::Any CloudsParser::When_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitWhen_stmt(this);
  else
    return visitor->visitChildren(this);
}

CloudsParser::When_stmtContext* CloudsParser::when_stmt() {
  When_stmtContext *_localctx = _tracker.createInstance<When_stmtContext>(_ctx, getState());
  enterRule(_localctx, 30, CloudsParser::RuleWhen_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(171);
    match(CloudsParser::WHEN);
    setState(172);
    expr(0);
    setState(173);
    match(CloudsParser::THEN);
    setState(174);
    stat();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Print_stmtContext ------------------------------------------------------------------

CloudsParser::Print_stmtContext::Print_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CloudsParser::Print_stmtContext::PRINT() {
  return getToken(CloudsParser::PRINT, 0);
}

CloudsParser::VariableContext* CloudsParser::Print_stmtContext::variable() {
  return getRuleContext<CloudsParser::VariableContext>(0);
}


size_t CloudsParser::Print_stmtContext::getRuleIndex() const {
  return CloudsParser::RulePrint_stmt;
}

void CloudsParser::Print_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint_stmt(this);
}

void CloudsParser::Print_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint_stmt(this);
}


antlrcpp::Any CloudsParser::Print_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitPrint_stmt(this);
  else
    return visitor->visitChildren(this);
}

CloudsParser::Print_stmtContext* CloudsParser::print_stmt() {
  Print_stmtContext *_localctx = _tracker.createInstance<Print_stmtContext>(_ctx, getState());
  enterRule(_localctx, 32, CloudsParser::RulePrint_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(176);
    match(CloudsParser::PRINT);
    setState(177);
    match(CloudsParser::T__2);
    setState(178);
    variable(0);
    setState(179);
    match(CloudsParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

CloudsParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CloudsParser::VariableContext::ID() {
  return getToken(CloudsParser::ID, 0);
}

CloudsParser::VariableContext* CloudsParser::VariableContext::variable() {
  return getRuleContext<CloudsParser::VariableContext>(0);
}

CloudsParser::Obj_varsContext* CloudsParser::VariableContext::obj_vars() {
  return getRuleContext<CloudsParser::Obj_varsContext>(0);
}


size_t CloudsParser::VariableContext::getRuleIndex() const {
  return CloudsParser::RuleVariable;
}

void CloudsParser::VariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable(this);
}

void CloudsParser::VariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable(this);
}


antlrcpp::Any CloudsParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}


CloudsParser::VariableContext* CloudsParser::variable() {
   return variable(0);
}

CloudsParser::VariableContext* CloudsParser::variable(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CloudsParser::VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, parentState);
  CloudsParser::VariableContext *previousContext = _localctx;
  size_t startState = 34;
  enterRecursionRule(_localctx, 34, CloudsParser::RuleVariable, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(183);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      break;
    }

    case 2: {
      setState(182);
      match(CloudsParser::ID);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(190);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<VariableContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleVariable);
        setState(185);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(186);
        match(CloudsParser::T__4);
        setState(187);
        obj_vars(); 
      }
      setState(192);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

CloudsParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CloudsParser::ExprContext::getRuleIndex() const {
  return CloudsParser::RuleExpr;
}

void CloudsParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IdentifierContext ------------------------------------------------------------------

CloudsParser::VariableContext* CloudsParser::IdentifierContext::variable() {
  return getRuleContext<CloudsParser::VariableContext>(0);
}

CloudsParser::IdentifierContext::IdentifierContext(ExprContext *ctx) { copyFrom(ctx); }

void CloudsParser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}
void CloudsParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}

antlrcpp::Any CloudsParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InitListContext ------------------------------------------------------------------

CloudsParser::Init_listContext* CloudsParser::InitListContext::init_list() {
  return getRuleContext<CloudsParser::Init_listContext>(0);
}

CloudsParser::InitListContext::InitListContext(ExprContext *ctx) { copyFrom(ctx); }

void CloudsParser::InitListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitList(this);
}
void CloudsParser::InitListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitList(this);
}

antlrcpp::Any CloudsParser::InitListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitInitList(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParensContext ------------------------------------------------------------------

CloudsParser::ExprContext* CloudsParser::ParensContext::expr() {
  return getRuleContext<CloudsParser::ExprContext>(0);
}

CloudsParser::ParensContext::ParensContext(ExprContext *ctx) { copyFrom(ctx); }

void CloudsParser::ParensContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParens(this);
}
void CloudsParser::ParensContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParens(this);
}

antlrcpp::Any CloudsParser::ParensContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitParens(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubExprContext ------------------------------------------------------------------

std::vector<CloudsParser::ExprContext *> CloudsParser::AddSubExprContext::expr() {
  return getRuleContexts<CloudsParser::ExprContext>();
}

CloudsParser::ExprContext* CloudsParser::AddSubExprContext::expr(size_t i) {
  return getRuleContext<CloudsParser::ExprContext>(i);
}

CloudsParser::Add_sub_opContext* CloudsParser::AddSubExprContext::add_sub_op() {
  return getRuleContext<CloudsParser::Add_sub_opContext>(0);
}

CloudsParser::AddSubExprContext::AddSubExprContext(ExprContext *ctx) { copyFrom(ctx); }

void CloudsParser::AddSubExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddSubExpr(this);
}
void CloudsParser::AddSubExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddSubExpr(this);
}

antlrcpp::Any CloudsParser::AddSubExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitAddSubExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumberConstContext ------------------------------------------------------------------

CloudsParser::NumberContext* CloudsParser::NumberConstContext::number() {
  return getRuleContext<CloudsParser::NumberContext>(0);
}

CloudsParser::NumberConstContext::NumberConstContext(ExprContext *ctx) { copyFrom(ctx); }

void CloudsParser::NumberConstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumberConst(this);
}
void CloudsParser::NumberConstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumberConst(this);
}

antlrcpp::Any CloudsParser::NumberConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitNumberConst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RotExprContext ------------------------------------------------------------------

std::vector<CloudsParser::ExprContext *> CloudsParser::RotExprContext::expr() {
  return getRuleContexts<CloudsParser::ExprContext>();
}

CloudsParser::ExprContext* CloudsParser::RotExprContext::expr(size_t i) {
  return getRuleContext<CloudsParser::ExprContext>(i);
}

CloudsParser::Rot_opContext* CloudsParser::RotExprContext::rot_op() {
  return getRuleContext<CloudsParser::Rot_opContext>(0);
}

CloudsParser::RotExprContext::RotExprContext(ExprContext *ctx) { copyFrom(ctx); }

void CloudsParser::RotExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRotExpr(this);
}
void CloudsParser::RotExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRotExpr(this);
}

antlrcpp::Any CloudsParser::RotExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitRotExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RelExprContext ------------------------------------------------------------------

std::vector<CloudsParser::ExprContext *> CloudsParser::RelExprContext::expr() {
  return getRuleContexts<CloudsParser::ExprContext>();
}

CloudsParser::ExprContext* CloudsParser::RelExprContext::expr(size_t i) {
  return getRuleContext<CloudsParser::ExprContext>(i);
}

CloudsParser::Rel_opContext* CloudsParser::RelExprContext::rel_op() {
  return getRuleContext<CloudsParser::Rel_opContext>(0);
}

CloudsParser::RelExprContext::RelExprContext(ExprContext *ctx) { copyFrom(ctx); }

void CloudsParser::RelExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelExpr(this);
}
void CloudsParser::RelExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelExpr(this);
}

antlrcpp::Any CloudsParser::RelExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitRelExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivExprContext ------------------------------------------------------------------

std::vector<CloudsParser::ExprContext *> CloudsParser::MulDivExprContext::expr() {
  return getRuleContexts<CloudsParser::ExprContext>();
}

CloudsParser::ExprContext* CloudsParser::MulDivExprContext::expr(size_t i) {
  return getRuleContext<CloudsParser::ExprContext>(i);
}

CloudsParser::Mul_div_opContext* CloudsParser::MulDivExprContext::mul_div_op() {
  return getRuleContext<CloudsParser::Mul_div_opContext>(0);
}

CloudsParser::MulDivExprContext::MulDivExprContext(ExprContext *ctx) { copyFrom(ctx); }

void CloudsParser::MulDivExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulDivExpr(this);
}
void CloudsParser::MulDivExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulDivExpr(this);
}

antlrcpp::Any CloudsParser::MulDivExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitMulDivExpr(this);
  else
    return visitor->visitChildren(this);
}

CloudsParser::ExprContext* CloudsParser::expr() {
   return expr(0);
}

CloudsParser::ExprContext* CloudsParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CloudsParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  CloudsParser::ExprContext *previousContext = _localctx;
  size_t startState = 36;
  enterRecursionRule(_localctx, 36, CloudsParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(204);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<InitListContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(194);
      match(CloudsParser::T__5);
      setState(195);
      init_list();
      setState(196);
      match(CloudsParser::T__6);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<NumberConstContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(198);
      number();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<IdentifierContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(199);
      variable(0);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ParensContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(200);
      match(CloudsParser::T__2);
      setState(201);
      expr(0);
      setState(202);
      match(CloudsParser::T__3);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(224);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(222);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(206);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(207);
          mul_div_op();
          setState(208);
          expr(9);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(210);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(211);
          add_sub_op();
          setState(212);
          expr(8);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<RelExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(214);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(215);
          rel_op();
          setState(216);
          expr(7);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<RotExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(218);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(219);
          rot_op();
          setState(220);
          expr(6);
          break;
        }

        } 
      }
      setState(226);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Init_listContext ------------------------------------------------------------------

CloudsParser::Init_listContext::Init_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CloudsParser::Obj_varsContext *> CloudsParser::Init_listContext::obj_vars() {
  return getRuleContexts<CloudsParser::Obj_varsContext>();
}

CloudsParser::Obj_varsContext* CloudsParser::Init_listContext::obj_vars(size_t i) {
  return getRuleContext<CloudsParser::Obj_varsContext>(i);
}

std::vector<CloudsParser::ExprContext *> CloudsParser::Init_listContext::expr() {
  return getRuleContexts<CloudsParser::ExprContext>();
}

CloudsParser::ExprContext* CloudsParser::Init_listContext::expr(size_t i) {
  return getRuleContext<CloudsParser::ExprContext>(i);
}


size_t CloudsParser::Init_listContext::getRuleIndex() const {
  return CloudsParser::RuleInit_list;
}

void CloudsParser::Init_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInit_list(this);
}

void CloudsParser::Init_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInit_list(this);
}


antlrcpp::Any CloudsParser::Init_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitInit_list(this);
  else
    return visitor->visitChildren(this);
}

CloudsParser::Init_listContext* CloudsParser::init_list() {
  Init_listContext *_localctx = _tracker.createInstance<Init_listContext>(_ctx, getState());
  enterRule(_localctx, 38, CloudsParser::RuleInit_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(227);
    obj_vars();
    setState(228);
    match(CloudsParser::EQ_OP);
    setState(229);
    expr(0);
    setState(237);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CloudsParser::T__7) {
      setState(230);
      match(CloudsParser::T__7);
      setState(231);
      obj_vars();
      setState(232);
      match(CloudsParser::EQ_OP);
      setState(233);
      expr(0);
      setState(239);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Init_varContext ------------------------------------------------------------------

CloudsParser::Init_varContext::Init_varContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CloudsParser::Init_varContext::TYPE() {
  return getToken(CloudsParser::TYPE, 0);
}

CloudsParser::VariableContext* CloudsParser::Init_varContext::variable() {
  return getRuleContext<CloudsParser::VariableContext>(0);
}


size_t CloudsParser::Init_varContext::getRuleIndex() const {
  return CloudsParser::RuleInit_var;
}

void CloudsParser::Init_varContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInit_var(this);
}

void CloudsParser::Init_varContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInit_var(this);
}


antlrcpp::Any CloudsParser::Init_varContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitInit_var(this);
  else
    return visitor->visitChildren(this);
}

CloudsParser::Init_varContext* CloudsParser::init_var() {
  Init_varContext *_localctx = _tracker.createInstance<Init_varContext>(_ctx, getState());
  enterRule(_localctx, 40, CloudsParser::RuleInit_var);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(240);
    match(CloudsParser::TYPE);
    setState(241);
    variable(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Obj_varsContext ------------------------------------------------------------------

CloudsParser::Obj_varsContext::Obj_varsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CloudsParser::Obj_varsContext::HEIGHT() {
  return getToken(CloudsParser::HEIGHT, 0);
}

tree::TerminalNode* CloudsParser::Obj_varsContext::WIDTH() {
  return getToken(CloudsParser::WIDTH, 0);
}

tree::TerminalNode* CloudsParser::Obj_varsContext::LENGTH() {
  return getToken(CloudsParser::LENGTH, 0);
}

tree::TerminalNode* CloudsParser::Obj_varsContext::RADIUS() {
  return getToken(CloudsParser::RADIUS, 0);
}

tree::TerminalNode* CloudsParser::Obj_varsContext::X() {
  return getToken(CloudsParser::X, 0);
}

tree::TerminalNode* CloudsParser::Obj_varsContext::Y() {
  return getToken(CloudsParser::Y, 0);
}

tree::TerminalNode* CloudsParser::Obj_varsContext::Z() {
  return getToken(CloudsParser::Z, 0);
}

tree::TerminalNode* CloudsParser::Obj_varsContext::CENTER() {
  return getToken(CloudsParser::CENTER, 0);
}

tree::TerminalNode* CloudsParser::Obj_varsContext::VELOCITY() {
  return getToken(CloudsParser::VELOCITY, 0);
}

tree::TerminalNode* CloudsParser::Obj_varsContext::SPEED() {
  return getToken(CloudsParser::SPEED, 0);
}


size_t CloudsParser::Obj_varsContext::getRuleIndex() const {
  return CloudsParser::RuleObj_vars;
}

void CloudsParser::Obj_varsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObj_vars(this);
}

void CloudsParser::Obj_varsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObj_vars(this);
}


antlrcpp::Any CloudsParser::Obj_varsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitObj_vars(this);
  else
    return visitor->visitChildren(this);
}

CloudsParser::Obj_varsContext* CloudsParser::obj_vars() {
  Obj_varsContext *_localctx = _tracker.createInstance<Obj_varsContext>(_ctx, getState());
  enterRule(_localctx, 42, CloudsParser::RuleObj_vars);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(243);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CloudsParser::T__8)
      | (1ULL << CloudsParser::CENTER)
      | (1ULL << CloudsParser::HEIGHT)
      | (1ULL << CloudsParser::WIDTH)
      | (1ULL << CloudsParser::LENGTH)
      | (1ULL << CloudsParser::RADIUS)
      | (1ULL << CloudsParser::X)
      | (1ULL << CloudsParser::Y)
      | (1ULL << CloudsParser::Z)
      | (1ULL << CloudsParser::VELOCITY)
      | (1ULL << CloudsParser::SPEED))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

CloudsParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CloudsParser::FuncNameContext* CloudsParser::FunctionContext::funcName() {
  return getRuleContext<CloudsParser::FuncNameContext>(0);
}

CloudsParser::ArgumentListContext* CloudsParser::FunctionContext::argumentList() {
  return getRuleContext<CloudsParser::ArgumentListContext>(0);
}

CloudsParser::MethodCall_refContext* CloudsParser::FunctionContext::methodCall_ref() {
  return getRuleContext<CloudsParser::MethodCall_refContext>(0);
}


size_t CloudsParser::FunctionContext::getRuleIndex() const {
  return CloudsParser::RuleFunction;
}

void CloudsParser::FunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction(this);
}

void CloudsParser::FunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction(this);
}


antlrcpp::Any CloudsParser::FunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitFunction(this);
  else
    return visitor->visitChildren(this);
}

CloudsParser::FunctionContext* CloudsParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 44, CloudsParser::RuleFunction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(255);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(245);
      funcName();
      setState(246);
      match(CloudsParser::T__2);
      setState(247);
      argumentList();
      setState(248);
      match(CloudsParser::T__3);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(250);
      funcName();
      setState(251);
      match(CloudsParser::T__2);
      setState(252);
      methodCall_ref();
      setState(253);
      match(CloudsParser::T__3);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncNameContext ------------------------------------------------------------------

CloudsParser::FuncNameContext::FuncNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CloudsParser::FuncNameContext::ID() {
  return getToken(CloudsParser::ID, 0);
}


size_t CloudsParser::FuncNameContext::getRuleIndex() const {
  return CloudsParser::RuleFuncName;
}

void CloudsParser::FuncNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncName(this);
}

void CloudsParser::FuncNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncName(this);
}


antlrcpp::Any CloudsParser::FuncNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitFuncName(this);
  else
    return visitor->visitChildren(this);
}

CloudsParser::FuncNameContext* CloudsParser::funcName() {
  FuncNameContext *_localctx = _tracker.createInstance<FuncNameContext>(_ctx, getState());
  enterRule(_localctx, 46, CloudsParser::RuleFuncName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(257);
    match(CloudsParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentListContext ------------------------------------------------------------------

CloudsParser::ArgumentListContext::ArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CloudsParser::ExprContext *> CloudsParser::ArgumentListContext::expr() {
  return getRuleContexts<CloudsParser::ExprContext>();
}

CloudsParser::ExprContext* CloudsParser::ArgumentListContext::expr(size_t i) {
  return getRuleContext<CloudsParser::ExprContext>(i);
}

CloudsParser::VariableContext* CloudsParser::ArgumentListContext::variable() {
  return getRuleContext<CloudsParser::VariableContext>(0);
}


size_t CloudsParser::ArgumentListContext::getRuleIndex() const {
  return CloudsParser::RuleArgumentList;
}

void CloudsParser::ArgumentListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgumentList(this);
}

void CloudsParser::ArgumentListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgumentList(this);
}


antlrcpp::Any CloudsParser::ArgumentListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitArgumentList(this);
  else
    return visitor->visitChildren(this);
}

CloudsParser::ArgumentListContext* CloudsParser::argumentList() {
  ArgumentListContext *_localctx = _tracker.createInstance<ArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 48, CloudsParser::RuleArgumentList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(269);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);

      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(260);
      expr(0);
      setState(265);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CloudsParser::T__7) {
        setState(261);
        match(CloudsParser::T__7);
        setState(262);
        expr(0);
        setState(267);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(268);
      variable(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodCallArgumentsContext ------------------------------------------------------------------

CloudsParser::MethodCallArgumentsContext::MethodCallArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CloudsParser::ExprContext *> CloudsParser::MethodCallArgumentsContext::expr() {
  return getRuleContexts<CloudsParser::ExprContext>();
}

CloudsParser::ExprContext* CloudsParser::MethodCallArgumentsContext::expr(size_t i) {
  return getRuleContext<CloudsParser::ExprContext>(i);
}


size_t CloudsParser::MethodCallArgumentsContext::getRuleIndex() const {
  return CloudsParser::RuleMethodCallArguments;
}

void CloudsParser::MethodCallArgumentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodCallArguments(this);
}

void CloudsParser::MethodCallArgumentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodCallArguments(this);
}


antlrcpp::Any CloudsParser::MethodCallArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitMethodCallArguments(this);
  else
    return visitor->visitChildren(this);
}

CloudsParser::MethodCallArgumentsContext* CloudsParser::methodCallArguments() {
  MethodCallArgumentsContext *_localctx = _tracker.createInstance<MethodCallArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 50, CloudsParser::RuleMethodCallArguments);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(280);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);

      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(272);
      expr(0);
      setState(277);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CloudsParser::T__7) {
        setState(273);
        match(CloudsParser::T__7);
        setState(274);
        expr(0);
        setState(279);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodCall_refContext ------------------------------------------------------------------

CloudsParser::MethodCall_refContext::MethodCall_refContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CloudsParser::ExprContext *> CloudsParser::MethodCall_refContext::expr() {
  return getRuleContexts<CloudsParser::ExprContext>();
}

CloudsParser::ExprContext* CloudsParser::MethodCall_refContext::expr(size_t i) {
  return getRuleContext<CloudsParser::ExprContext>(i);
}


size_t CloudsParser::MethodCall_refContext::getRuleIndex() const {
  return CloudsParser::RuleMethodCall_ref;
}

void CloudsParser::MethodCall_refContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodCall_ref(this);
}

void CloudsParser::MethodCall_refContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodCall_ref(this);
}


antlrcpp::Any CloudsParser::MethodCall_refContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitMethodCall_ref(this);
  else
    return visitor->visitChildren(this);
}

CloudsParser::MethodCall_refContext* CloudsParser::methodCall_ref() {
  MethodCall_refContext *_localctx = _tracker.createInstance<MethodCall_refContext>(_ctx, getState());
  enterRule(_localctx, 52, CloudsParser::RuleMethodCall_ref);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(293);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CloudsParser::T__3: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case CloudsParser::T__9: {
        enterOuterAlt(_localctx, 2);
        setState(283);
        match(CloudsParser::T__9);
        setState(284);
        expr(0);
        setState(290);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == CloudsParser::T__7) {
          setState(285);
          match(CloudsParser::T__7);
          setState(286);
          match(CloudsParser::T__9);
          setState(287);
          expr(0);
          setState(292);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

CloudsParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CloudsParser::NumberContext::INT() {
  return getToken(CloudsParser::INT, 0);
}

CloudsParser::SignContext* CloudsParser::NumberContext::sign() {
  return getRuleContext<CloudsParser::SignContext>(0);
}

tree::TerminalNode* CloudsParser::NumberContext::FLOAT() {
  return getToken(CloudsParser::FLOAT, 0);
}


size_t CloudsParser::NumberContext::getRuleIndex() const {
  return CloudsParser::RuleNumber;
}

void CloudsParser::NumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumber(this);
}

void CloudsParser::NumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumber(this);
}


antlrcpp::Any CloudsParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

CloudsParser::NumberContext* CloudsParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 54, CloudsParser::RuleNumber);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(303);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(296);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CloudsParser::ADD

      || _la == CloudsParser::SUB) {
        setState(295);
        sign();
      }
      setState(298);
      match(CloudsParser::INT);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(300);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CloudsParser::ADD

      || _la == CloudsParser::SUB) {
        setState(299);
        sign();
      }
      setState(302);
      match(CloudsParser::FLOAT);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignContext ------------------------------------------------------------------

CloudsParser::SignContext::SignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CloudsParser::SignContext::getRuleIndex() const {
  return CloudsParser::RuleSign;
}

void CloudsParser::SignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSign(this);
}

void CloudsParser::SignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSign(this);
}


antlrcpp::Any CloudsParser::SignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitSign(this);
  else
    return visitor->visitChildren(this);
}

CloudsParser::SignContext* CloudsParser::sign() {
  SignContext *_localctx = _tracker.createInstance<SignContext>(_ctx, getState());
  enterRule(_localctx, 56, CloudsParser::RuleSign);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(305);
    _la = _input->LA(1);
    if (!(_la == CloudsParser::ADD

    || _la == CloudsParser::SUB)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assignment_operatorsContext ------------------------------------------------------------------

CloudsParser::Assignment_operatorsContext::Assignment_operatorsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CloudsParser::Assignment_operatorsContext::EQ_OP() {
  return getToken(CloudsParser::EQ_OP, 0);
}

tree::TerminalNode* CloudsParser::Assignment_operatorsContext::ADD_EQ() {
  return getToken(CloudsParser::ADD_EQ, 0);
}

tree::TerminalNode* CloudsParser::Assignment_operatorsContext::SUB_EQ() {
  return getToken(CloudsParser::SUB_EQ, 0);
}

tree::TerminalNode* CloudsParser::Assignment_operatorsContext::MUL_EQ() {
  return getToken(CloudsParser::MUL_EQ, 0);
}

tree::TerminalNode* CloudsParser::Assignment_operatorsContext::DIV_EQ() {
  return getToken(CloudsParser::DIV_EQ, 0);
}


size_t CloudsParser::Assignment_operatorsContext::getRuleIndex() const {
  return CloudsParser::RuleAssignment_operators;
}

void CloudsParser::Assignment_operatorsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment_operators(this);
}

void CloudsParser::Assignment_operatorsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment_operators(this);
}


antlrcpp::Any CloudsParser::Assignment_operatorsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitAssignment_operators(this);
  else
    return visitor->visitChildren(this);
}

CloudsParser::Assignment_operatorsContext* CloudsParser::assignment_operators() {
  Assignment_operatorsContext *_localctx = _tracker.createInstance<Assignment_operatorsContext>(_ctx, getState());
  enterRule(_localctx, 58, CloudsParser::RuleAssignment_operators);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(307);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CloudsParser::MUL_EQ)
      | (1ULL << CloudsParser::DIV_EQ)
      | (1ULL << CloudsParser::ADD_EQ)
      | (1ULL << CloudsParser::SUB_EQ)
      | (1ULL << CloudsParser::EQ_OP))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Mul_div_opContext ------------------------------------------------------------------

CloudsParser::Mul_div_opContext::Mul_div_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CloudsParser::Mul_div_opContext::MUL() {
  return getToken(CloudsParser::MUL, 0);
}

tree::TerminalNode* CloudsParser::Mul_div_opContext::DIV() {
  return getToken(CloudsParser::DIV, 0);
}


size_t CloudsParser::Mul_div_opContext::getRuleIndex() const {
  return CloudsParser::RuleMul_div_op;
}

void CloudsParser::Mul_div_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMul_div_op(this);
}

void CloudsParser::Mul_div_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMul_div_op(this);
}


antlrcpp::Any CloudsParser::Mul_div_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitMul_div_op(this);
  else
    return visitor->visitChildren(this);
}

CloudsParser::Mul_div_opContext* CloudsParser::mul_div_op() {
  Mul_div_opContext *_localctx = _tracker.createInstance<Mul_div_opContext>(_ctx, getState());
  enterRule(_localctx, 60, CloudsParser::RuleMul_div_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(309);
    _la = _input->LA(1);
    if (!(_la == CloudsParser::MUL

    || _la == CloudsParser::DIV)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Add_sub_opContext ------------------------------------------------------------------

CloudsParser::Add_sub_opContext::Add_sub_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CloudsParser::Add_sub_opContext::ADD() {
  return getToken(CloudsParser::ADD, 0);
}

tree::TerminalNode* CloudsParser::Add_sub_opContext::SUB() {
  return getToken(CloudsParser::SUB, 0);
}


size_t CloudsParser::Add_sub_opContext::getRuleIndex() const {
  return CloudsParser::RuleAdd_sub_op;
}

void CloudsParser::Add_sub_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdd_sub_op(this);
}

void CloudsParser::Add_sub_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdd_sub_op(this);
}


antlrcpp::Any CloudsParser::Add_sub_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitAdd_sub_op(this);
  else
    return visitor->visitChildren(this);
}

CloudsParser::Add_sub_opContext* CloudsParser::add_sub_op() {
  Add_sub_opContext *_localctx = _tracker.createInstance<Add_sub_opContext>(_ctx, getState());
  enterRule(_localctx, 62, CloudsParser::RuleAdd_sub_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(311);
    _la = _input->LA(1);
    if (!(_la == CloudsParser::ADD

    || _la == CloudsParser::SUB)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rel_opContext ------------------------------------------------------------------

CloudsParser::Rel_opContext::Rel_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CloudsParser::Rel_opContext::EQ_OP() {
  return getToken(CloudsParser::EQ_OP, 0);
}

tree::TerminalNode* CloudsParser::Rel_opContext::NE_OP() {
  return getToken(CloudsParser::NE_OP, 0);
}

tree::TerminalNode* CloudsParser::Rel_opContext::LT_OP() {
  return getToken(CloudsParser::LT_OP, 0);
}

tree::TerminalNode* CloudsParser::Rel_opContext::LE_OP() {
  return getToken(CloudsParser::LE_OP, 0);
}

tree::TerminalNode* CloudsParser::Rel_opContext::GT_OP() {
  return getToken(CloudsParser::GT_OP, 0);
}

tree::TerminalNode* CloudsParser::Rel_opContext::GE_OP() {
  return getToken(CloudsParser::GE_OP, 0);
}


size_t CloudsParser::Rel_opContext::getRuleIndex() const {
  return CloudsParser::RuleRel_op;
}

void CloudsParser::Rel_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRel_op(this);
}

void CloudsParser::Rel_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRel_op(this);
}


antlrcpp::Any CloudsParser::Rel_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitRel_op(this);
  else
    return visitor->visitChildren(this);
}

CloudsParser::Rel_opContext* CloudsParser::rel_op() {
  Rel_opContext *_localctx = _tracker.createInstance<Rel_opContext>(_ctx, getState());
  enterRule(_localctx, 64, CloudsParser::RuleRel_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(313);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CloudsParser::EQ_OP)
      | (1ULL << CloudsParser::NE_OP)
      | (1ULL << CloudsParser::LT_OP)
      | (1ULL << CloudsParser::LE_OP)
      | (1ULL << CloudsParser::GT_OP)
      | (1ULL << CloudsParser::GE_OP))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rot_opContext ------------------------------------------------------------------

CloudsParser::Rot_opContext::Rot_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CloudsParser::Rot_opContext::ROLL_OP() {
  return getToken(CloudsParser::ROLL_OP, 0);
}

tree::TerminalNode* CloudsParser::Rot_opContext::PITCH_OP() {
  return getToken(CloudsParser::PITCH_OP, 0);
}

tree::TerminalNode* CloudsParser::Rot_opContext::YAW_OP() {
  return getToken(CloudsParser::YAW_OP, 0);
}


size_t CloudsParser::Rot_opContext::getRuleIndex() const {
  return CloudsParser::RuleRot_op;
}

void CloudsParser::Rot_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRot_op(this);
}

void CloudsParser::Rot_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CloudsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRot_op(this);
}


antlrcpp::Any CloudsParser::Rot_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CloudsVisitor*>(visitor))
    return parserVisitor->visitRot_op(this);
  else
    return visitor->visitChildren(this);
}

CloudsParser::Rot_opContext* CloudsParser::rot_op() {
  Rot_opContext *_localctx = _tracker.createInstance<Rot_opContext>(_ctx, getState());
  enterRule(_localctx, 66, CloudsParser::RuleRot_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(315);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CloudsParser::ROLL_OP)
      | (1ULL << CloudsParser::PITCH_OP)
      | (1ULL << CloudsParser::YAW_OP))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool CloudsParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 17: return variableSempred(dynamic_cast<VariableContext *>(context), predicateIndex);
    case 18: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CloudsParser::variableSempred(VariableContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool CloudsParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 8);
    case 2: return precpred(_ctx, 7);
    case 3: return precpred(_ctx, 6);
    case 4: return precpred(_ctx, 5);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> CloudsParser::_decisionToDFA;
atn::PredictionContextCache CloudsParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN CloudsParser::_atn;
std::vector<uint16_t> CloudsParser::_serializedATN;

std::vector<std::string> CloudsParser::_ruleNames = {
  "program", "header", "block", "environments", "run_simulation", "scope", 
  "stmt_list", "stat", "assignment_stmt", "repeat_stmt", "if_stmt", "put_stmt", 
  "collision_stmt", "wait_stmt", "move_stmt", "when_stmt", "print_stmt", 
  "variable", "expr", "init_list", "init_var", "obj_vars", "function", "funcName", 
  "argumentList", "methodCallArguments", "methodCall_ref", "number", "sign", 
  "assignment_operators", "mul_div_op", "add_sub_op", "rel_op", "rot_op"
};

std::vector<std::string> CloudsParser::_literalNames = {
  "", "'{'", "'}'", "'('", "')'", "'.'", "'['", "']'", "','", "'p'", "'&'", 
  "'Clouds'", "'REPEAT'", "'UNTIL'", "'IF'", "'THEN'", "'ELSE'", "'WHEN'", 
  "'center'", "'teleport'", "'collision'", "'pause'", "'wait'", "'move'", 
  "'to'", "", "'at'", "'in'", "'for'", "'finish'", "'putnenv'", "'function'", 
  "'environment'", "'simulation'", "'print'", "'between'", "", "'height'", 
  "'width'", "'length'", "'radius'", "'x'", "'y'", "'z'", "'point'", "'velocity'", 
  "'speed'", "'*'", "'/'", "'+'", "'-'", "'*='", "'/='", "'+='", "'-='", 
  "'='", "'!='", "'<'", "'<='", "'>'", "'>='", "'~R'", "'~P'", "'~Y'", "'//'", 
  "';'"
};

std::vector<std::string> CloudsParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "CLOUDS", "REPEAT", "UNTIL", 
  "IF", "THEN", "ELSE", "WHEN", "CENTER", "TELEPORT", "COLISION", "PAUSE", 
  "WAIT", "MOVE", "TO", "MOVE_3", "AT", "IN", "FOR", "FINISH", "PUTNENV", 
  "FUNCTION", "ENVIRONMENT", "SIMULATION", "PRINT", "BETWEEN", "TYPE", "HEIGHT", 
  "WIDTH", "LENGTH", "RADIUS", "X", "Y", "Z", "POINT", "VELOCITY", "SPEED", 
  "MUL", "DIV", "ADD", "SUB", "MUL_EQ", "DIV_EQ", "ADD_EQ", "SUB_EQ", "EQ_OP", 
  "NE_OP", "LT_OP", "LE_OP", "GT_OP", "GE_OP", "ROLL_OP", "PITCH_OP", "YAW_OP", 
  "COM_OP", "SEMICOLON", "FLOAT", "ID", "INT", "NEWLINE", "WS", "COMMENT", 
  "BLOCK_COM"
};

dfa::Vocabulary CloudsParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> CloudsParser::_tokenNames;

CloudsParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x4a, 0x140, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x5, 0x4, 0x52, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x64, 0xa, 
    0x8, 0xc, 0x8, 0xe, 0x8, 0x67, 0xb, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x5, 0x9, 0x74, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x7e, 0xa, 0xa, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x8b, 0xa, 0xc, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x99, 0xa, 0xd, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xac, 0xa, 0x10, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xba, 
    0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0xbf, 0xa, 0x13, 
    0xc, 0x13, 0xe, 0x13, 0xc2, 0xb, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x5, 0x14, 0xcf, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x7, 0x14, 0xe1, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0xe4, 0xb, 0x14, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x7, 0x15, 0xee, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0xf1, 
    0xb, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x102, 0xa, 0x18, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 0x10a, 
    0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x10d, 0xb, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 
    0x110, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 
    0x116, 0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0x119, 0xb, 0x1b, 0x5, 0x1b, 
    0x11b, 0xa, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x7, 0x1c, 0x123, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0x126, 
    0xb, 0x1c, 0x5, 0x1c, 0x128, 0xa, 0x1c, 0x3, 0x1d, 0x5, 0x1d, 0x12b, 
    0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x12f, 0xa, 0x1d, 0x3, 0x1d, 
    0x5, 0x1d, 0x132, 0xa, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 
    0x23, 0x3, 0x23, 0x3, 0x23, 0x2, 0x4, 0x24, 0x26, 0x24, 0x2, 0x4, 0x6, 
    0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 
    0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x2, 0x8, 0x6, 0x2, 0xb, 0xb, 
    0x14, 0x14, 0x27, 0x2d, 0x2f, 0x30, 0x3, 0x2, 0x33, 0x34, 0x3, 0x2, 
    0x35, 0x39, 0x3, 0x2, 0x31, 0x32, 0x3, 0x2, 0x39, 0x3e, 0x3, 0x2, 0x3f, 
    0x41, 0x2, 0x143, 0x2, 0x46, 0x3, 0x2, 0x2, 0x2, 0x4, 0x4b, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0x51, 0x3, 0x2, 0x2, 0x2, 0x8, 0x53, 0x3, 0x2, 0x2, 0x2, 
    0xa, 0x57, 0x3, 0x2, 0x2, 0x2, 0xc, 0x5a, 0x3, 0x2, 0x2, 0x2, 0xe, 0x5e, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x73, 0x3, 0x2, 0x2, 0x2, 0x12, 0x7d, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x16, 0x84, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x98, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x9a, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0xa0, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xa3, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0xad, 0x3, 0x2, 0x2, 0x2, 0x22, 0xb2, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0xb9, 0x3, 0x2, 0x2, 0x2, 0x26, 0xce, 0x3, 0x2, 0x2, 0x2, 0x28, 0xe5, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0xf2, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xf5, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0x101, 0x3, 0x2, 0x2, 0x2, 0x30, 0x103, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x34, 0x11a, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0x127, 0x3, 0x2, 0x2, 0x2, 0x38, 0x131, 0x3, 0x2, 0x2, 0x2, 
    0x3a, 0x133, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x135, 0x3, 0x2, 0x2, 0x2, 0x3e, 
    0x137, 0x3, 0x2, 0x2, 0x2, 0x40, 0x139, 0x3, 0x2, 0x2, 0x2, 0x42, 0x13b, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x5, 
    0x4, 0x3, 0x2, 0x47, 0x48, 0x5, 0x6, 0x4, 0x2, 0x48, 0x49, 0x5, 0xa, 
    0x6, 0x2, 0x49, 0x4a, 0x5, 0x6, 0x4, 0x2, 0x4a, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x4b, 0x4c, 0x7, 0xd, 0x2, 0x2, 0x4c, 0x4d, 0x7, 0x45, 0x2, 0x2, 
    0x4d, 0x4e, 0x7, 0x43, 0x2, 0x2, 0x4e, 0x5, 0x3, 0x2, 0x2, 0x2, 0x4f, 
    0x52, 0x5, 0x8, 0x5, 0x2, 0x50, 0x52, 0x5, 0x2e, 0x18, 0x2, 0x51, 0x4f, 
    0x3, 0x2, 0x2, 0x2, 0x51, 0x50, 0x3, 0x2, 0x2, 0x2, 0x52, 0x7, 0x3, 
    0x2, 0x2, 0x2, 0x53, 0x54, 0x7, 0x22, 0x2, 0x2, 0x54, 0x55, 0x7, 0x45, 
    0x2, 0x2, 0x55, 0x56, 0x5, 0xc, 0x7, 0x2, 0x56, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x57, 0x58, 0x7, 0x23, 0x2, 0x2, 0x58, 0x59, 0x5, 0xc, 0x7, 0x2, 
    0x59, 0xb, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0x7, 0x3, 0x2, 0x2, 0x5b, 
    0x5c, 0x5, 0xe, 0x8, 0x2, 0x5c, 0x5d, 0x7, 0x4, 0x2, 0x2, 0x5d, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0x5, 0x10, 0x9, 0x2, 0x5f, 0x65, 0x7, 
    0x43, 0x2, 0x2, 0x60, 0x61, 0x5, 0x10, 0x9, 0x2, 0x61, 0x62, 0x7, 0x43, 
    0x2, 0x2, 0x62, 0x64, 0x3, 0x2, 0x2, 0x2, 0x63, 0x60, 0x3, 0x2, 0x2, 
    0x2, 0x64, 0x67, 0x3, 0x2, 0x2, 0x2, 0x65, 0x63, 0x3, 0x2, 0x2, 0x2, 
    0x65, 0x66, 0x3, 0x2, 0x2, 0x2, 0x66, 0xf, 0x3, 0x2, 0x2, 0x2, 0x67, 
    0x65, 0x3, 0x2, 0x2, 0x2, 0x68, 0x74, 0x5, 0x12, 0xa, 0x2, 0x69, 0x74, 
    0x5, 0x2e, 0x18, 0x2, 0x6a, 0x74, 0x5, 0x14, 0xb, 0x2, 0x6b, 0x74, 0x5, 
    0x16, 0xc, 0x2, 0x6c, 0x74, 0x5, 0x20, 0x11, 0x2, 0x6d, 0x74, 0x5, 0x22, 
    0x12, 0x2, 0x6e, 0x74, 0x5, 0x18, 0xd, 0x2, 0x6f, 0x74, 0x5, 0x1e, 0x10, 
    0x2, 0x70, 0x74, 0x7, 0x17, 0x2, 0x2, 0x71, 0x74, 0x5, 0x1c, 0xf, 0x2, 
    0x72, 0x74, 0x5, 0x1a, 0xe, 0x2, 0x73, 0x68, 0x3, 0x2, 0x2, 0x2, 0x73, 
    0x69, 0x3, 0x2, 0x2, 0x2, 0x73, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x73, 0x6b, 
    0x3, 0x2, 0x2, 0x2, 0x73, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x73, 0x6d, 0x3, 
    0x2, 0x2, 0x2, 0x73, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x73, 0x6f, 0x3, 0x2, 
    0x2, 0x2, 0x73, 0x70, 0x3, 0x2, 0x2, 0x2, 0x73, 0x71, 0x3, 0x2, 0x2, 
    0x2, 0x73, 0x72, 0x3, 0x2, 0x2, 0x2, 0x74, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0x75, 0x76, 0x5, 0x24, 0x13, 0x2, 0x76, 0x77, 0x5, 0x3c, 0x1f, 0x2, 
    0x77, 0x78, 0x5, 0x26, 0x14, 0x2, 0x78, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x79, 
    0x7a, 0x5, 0x2a, 0x16, 0x2, 0x7a, 0x7b, 0x5, 0x3c, 0x1f, 0x2, 0x7b, 
    0x7c, 0x5, 0x26, 0x14, 0x2, 0x7c, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x75, 
    0x3, 0x2, 0x2, 0x2, 0x7d, 0x79, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x13, 0x3, 
    0x2, 0x2, 0x2, 0x7f, 0x80, 0x7, 0xe, 0x2, 0x2, 0x80, 0x81, 0x5, 0xe, 
    0x8, 0x2, 0x81, 0x82, 0x7, 0xf, 0x2, 0x2, 0x82, 0x83, 0x5, 0x26, 0x14, 
    0x2, 0x83, 0x15, 0x3, 0x2, 0x2, 0x2, 0x84, 0x85, 0x7, 0x10, 0x2, 0x2, 
    0x85, 0x86, 0x5, 0x26, 0x14, 0x2, 0x86, 0x87, 0x7, 0x11, 0x2, 0x2, 0x87, 
    0x8a, 0x5, 0x10, 0x9, 0x2, 0x88, 0x89, 0x7, 0x12, 0x2, 0x2, 0x89, 0x8b, 
    0x5, 0x10, 0x9, 0x2, 0x8a, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x3, 
    0x2, 0x2, 0x2, 0x8b, 0x17, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x7, 0x20, 
    0x2, 0x2, 0x8d, 0x8e, 0x5, 0x24, 0x13, 0x2, 0x8e, 0x8f, 0x7, 0x14, 0x2, 
    0x2, 0x8f, 0x99, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x7, 0x20, 0x2, 0x2, 
    0x91, 0x92, 0x5, 0x24, 0x13, 0x2, 0x92, 0x93, 0x7, 0x26, 0x2, 0x2, 0x93, 
    0x99, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x7, 0x20, 0x2, 0x2, 0x95, 0x96, 
    0x5, 0x24, 0x13, 0x2, 0x96, 0x97, 0x5, 0x24, 0x13, 0x2, 0x97, 0x99, 
    0x3, 0x2, 0x2, 0x2, 0x98, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x98, 0x90, 0x3, 
    0x2, 0x2, 0x2, 0x98, 0x94, 0x3, 0x2, 0x2, 0x2, 0x99, 0x19, 0x3, 0x2, 
    0x2, 0x2, 0x9a, 0x9b, 0x7, 0x16, 0x2, 0x2, 0x9b, 0x9c, 0x5, 0x24, 0x13, 
    0x2, 0x9c, 0x9d, 0x7, 0x25, 0x2, 0x2, 0x9d, 0x9e, 0x5, 0x24, 0x13, 0x2, 
    0x9e, 0x9f, 0x5, 0x24, 0x13, 0x2, 0x9f, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xa0, 
    0xa1, 0x7, 0x18, 0x2, 0x2, 0xa1, 0xa2, 0x5, 0x26, 0x14, 0x2, 0xa2, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0xa3, 0xa4, 0x7, 0x19, 0x2, 0x2, 0xa4, 0xa5, 0x5, 
    0x26, 0x14, 0x2, 0xa5, 0xa6, 0x7, 0x1a, 0x2, 0x2, 0xa6, 0xa7, 0x5, 0x26, 
    0x14, 0x2, 0xa7, 0xa8, 0x7, 0x1b, 0x2, 0x2, 0xa8, 0xab, 0x5, 0x26, 0x14, 
    0x2, 0xa9, 0xaa, 0x7, 0x1b, 0x2, 0x2, 0xaa, 0xac, 0x5, 0x26, 0x14, 0x2, 
    0xab, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x3, 0x2, 0x2, 0x2, 0xac, 
    0x1f, 0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 0x7, 0x13, 0x2, 0x2, 0xae, 0xaf, 
    0x5, 0x26, 0x14, 0x2, 0xaf, 0xb0, 0x7, 0x11, 0x2, 0x2, 0xb0, 0xb1, 0x5, 
    0x10, 0x9, 0x2, 0xb1, 0x21, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 0x7, 0x24, 
    0x2, 0x2, 0xb3, 0xb4, 0x7, 0x5, 0x2, 0x2, 0xb4, 0xb5, 0x5, 0x24, 0x13, 
    0x2, 0xb5, 0xb6, 0x7, 0x6, 0x2, 0x2, 0xb6, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0xb7, 0xba, 0x8, 0x13, 0x1, 0x2, 0xb8, 0xba, 0x7, 0x45, 0x2, 0x2, 0xb9, 
    0xb7, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xba, 0xc0, 
    0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 0xc, 0x4, 0x2, 0x2, 0xbc, 0xbd, 0x7, 
    0x7, 0x2, 0x2, 0xbd, 0xbf, 0x5, 0x2c, 0x17, 0x2, 0xbe, 0xbb, 0x3, 0x2, 
    0x2, 0x2, 0xbf, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xbe, 0x3, 0x2, 0x2, 
    0x2, 0xc0, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc1, 0x25, 0x3, 0x2, 0x2, 0x2, 
    0xc2, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 0x8, 0x14, 0x1, 0x2, 0xc4, 
    0xc5, 0x7, 0x8, 0x2, 0x2, 0xc5, 0xc6, 0x5, 0x28, 0x15, 0x2, 0xc6, 0xc7, 
    0x7, 0x9, 0x2, 0x2, 0xc7, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xcf, 0x5, 
    0x38, 0x1d, 0x2, 0xc9, 0xcf, 0x5, 0x24, 0x13, 0x2, 0xca, 0xcb, 0x7, 
    0x5, 0x2, 0x2, 0xcb, 0xcc, 0x5, 0x26, 0x14, 0x2, 0xcc, 0xcd, 0x7, 0x6, 
    0x2, 0x2, 0xcd, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xce, 0xc3, 0x3, 0x2, 0x2, 
    0x2, 0xce, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xce, 0xc9, 0x3, 0x2, 0x2, 0x2, 
    0xce, 0xca, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xd0, 
    0xd1, 0xc, 0xa, 0x2, 0x2, 0xd1, 0xd2, 0x5, 0x3e, 0x20, 0x2, 0xd2, 0xd3, 
    0x5, 0x26, 0x14, 0xb, 0xd3, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0xc, 
    0x9, 0x2, 0x2, 0xd5, 0xd6, 0x5, 0x40, 0x21, 0x2, 0xd6, 0xd7, 0x5, 0x26, 
    0x14, 0xa, 0xd7, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0xc, 0x8, 0x2, 
    0x2, 0xd9, 0xda, 0x5, 0x42, 0x22, 0x2, 0xda, 0xdb, 0x5, 0x26, 0x14, 
    0x9, 0xdb, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdd, 0xc, 0x7, 0x2, 0x2, 
    0xdd, 0xde, 0x5, 0x44, 0x23, 0x2, 0xde, 0xdf, 0x5, 0x26, 0x14, 0x8, 
    0xdf, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xe0, 
    0xd4, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xdc, 
    0x3, 0x2, 0x2, 0x2, 0xe1, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe0, 0x3, 
    0x2, 0x2, 0x2, 0xe2, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe3, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0xe4, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe6, 0x5, 0x2c, 0x17, 
    0x2, 0xe6, 0xe7, 0x7, 0x39, 0x2, 0x2, 0xe7, 0xef, 0x5, 0x26, 0x14, 0x2, 
    0xe8, 0xe9, 0x7, 0xa, 0x2, 0x2, 0xe9, 0xea, 0x5, 0x2c, 0x17, 0x2, 0xea, 
    0xeb, 0x7, 0x39, 0x2, 0x2, 0xeb, 0xec, 0x5, 0x26, 0x14, 0x2, 0xec, 0xee, 
    0x3, 0x2, 0x2, 0x2, 0xed, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xee, 0xf1, 0x3, 
    0x2, 0x2, 0x2, 0xef, 0xed, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x3, 0x2, 
    0x2, 0x2, 0xf0, 0x29, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xef, 0x3, 0x2, 0x2, 
    0x2, 0xf2, 0xf3, 0x7, 0x26, 0x2, 0x2, 0xf3, 0xf4, 0x5, 0x24, 0x13, 0x2, 
    0xf4, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf6, 0x9, 0x2, 0x2, 0x2, 0xf6, 
    0x2d, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf8, 0x5, 0x30, 0x19, 0x2, 0xf8, 0xf9, 
    0x7, 0x5, 0x2, 0x2, 0xf9, 0xfa, 0x5, 0x32, 0x1a, 0x2, 0xfa, 0xfb, 0x7, 
    0x6, 0x2, 0x2, 0xfb, 0x102, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfd, 0x5, 0x30, 
    0x19, 0x2, 0xfd, 0xfe, 0x7, 0x5, 0x2, 0x2, 0xfe, 0xff, 0x5, 0x36, 0x1c, 
    0x2, 0xff, 0x100, 0x7, 0x6, 0x2, 0x2, 0x100, 0x102, 0x3, 0x2, 0x2, 0x2, 
    0x101, 0xf7, 0x3, 0x2, 0x2, 0x2, 0x101, 0xfc, 0x3, 0x2, 0x2, 0x2, 0x102, 
    0x2f, 0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 0x7, 0x45, 0x2, 0x2, 0x104, 
    0x31, 0x3, 0x2, 0x2, 0x2, 0x105, 0x110, 0x3, 0x2, 0x2, 0x2, 0x106, 0x10b, 
    0x5, 0x26, 0x14, 0x2, 0x107, 0x108, 0x7, 0xa, 0x2, 0x2, 0x108, 0x10a, 
    0x5, 0x26, 0x14, 0x2, 0x109, 0x107, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x10d, 
    0x3, 0x2, 0x2, 0x2, 0x10b, 0x109, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10c, 
    0x3, 0x2, 0x2, 0x2, 0x10c, 0x110, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10b, 
    0x3, 0x2, 0x2, 0x2, 0x10e, 0x110, 0x5, 0x24, 0x13, 0x2, 0x10f, 0x105, 
    0x3, 0x2, 0x2, 0x2, 0x10f, 0x106, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x10e, 
    0x3, 0x2, 0x2, 0x2, 0x110, 0x33, 0x3, 0x2, 0x2, 0x2, 0x111, 0x11b, 0x3, 
    0x2, 0x2, 0x2, 0x112, 0x117, 0x5, 0x26, 0x14, 0x2, 0x113, 0x114, 0x7, 
    0xa, 0x2, 0x2, 0x114, 0x116, 0x5, 0x26, 0x14, 0x2, 0x115, 0x113, 0x3, 
    0x2, 0x2, 0x2, 0x116, 0x119, 0x3, 0x2, 0x2, 0x2, 0x117, 0x115, 0x3, 
    0x2, 0x2, 0x2, 0x117, 0x118, 0x3, 0x2, 0x2, 0x2, 0x118, 0x11b, 0x3, 
    0x2, 0x2, 0x2, 0x119, 0x117, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x111, 0x3, 
    0x2, 0x2, 0x2, 0x11a, 0x112, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x35, 0x3, 0x2, 
    0x2, 0x2, 0x11c, 0x128, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 0x7, 0xc, 
    0x2, 0x2, 0x11e, 0x124, 0x5, 0x26, 0x14, 0x2, 0x11f, 0x120, 0x7, 0xa, 
    0x2, 0x2, 0x120, 0x121, 0x7, 0xc, 0x2, 0x2, 0x121, 0x123, 0x5, 0x26, 
    0x14, 0x2, 0x122, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x123, 0x126, 0x3, 0x2, 
    0x2, 0x2, 0x124, 0x122, 0x3, 0x2, 0x2, 0x2, 0x124, 0x125, 0x3, 0x2, 
    0x2, 0x2, 0x125, 0x128, 0x3, 0x2, 0x2, 0x2, 0x126, 0x124, 0x3, 0x2, 
    0x2, 0x2, 0x127, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x127, 0x11d, 0x3, 0x2, 
    0x2, 0x2, 0x128, 0x37, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12b, 0x5, 0x3a, 
    0x1e, 0x2, 0x12a, 0x129, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12b, 0x3, 0x2, 
    0x2, 0x2, 0x12b, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x132, 0x7, 0x46, 
    0x2, 0x2, 0x12d, 0x12f, 0x5, 0x3a, 0x1e, 0x2, 0x12e, 0x12d, 0x3, 0x2, 
    0x2, 0x2, 0x12e, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x130, 0x3, 0x2, 
    0x2, 0x2, 0x130, 0x132, 0x7, 0x44, 0x2, 0x2, 0x131, 0x12a, 0x3, 0x2, 
    0x2, 0x2, 0x131, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x132, 0x39, 0x3, 0x2, 0x2, 
    0x2, 0x133, 0x134, 0x9, 0x3, 0x2, 0x2, 0x134, 0x3b, 0x3, 0x2, 0x2, 0x2, 
    0x135, 0x136, 0x9, 0x4, 0x2, 0x2, 0x136, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x137, 
    0x138, 0x9, 0x5, 0x2, 0x2, 0x138, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x139, 0x13a, 
    0x9, 0x3, 0x2, 0x2, 0x13a, 0x41, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x13c, 0x9, 
    0x6, 0x2, 0x2, 0x13c, 0x43, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13e, 0x9, 0x7, 
    0x2, 0x2, 0x13e, 0x45, 0x3, 0x2, 0x2, 0x2, 0x19, 0x51, 0x65, 0x73, 0x7d, 
    0x8a, 0x98, 0xab, 0xb9, 0xc0, 0xce, 0xe0, 0xe2, 0xef, 0x101, 0x10b, 
    0x10f, 0x117, 0x11a, 0x124, 0x127, 0x12a, 0x12e, 0x131, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

CloudsParser::Initializer CloudsParser::_init;