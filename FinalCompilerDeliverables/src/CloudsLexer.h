
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from d:\UbuntuFiles\CMPE152Ubuntu\cmpe152newlanguage\FinalCompilerDeliverables\Clouds.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  CloudsLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, CLOUDS = 13, 
    REPEAT = 14, UNTIL = 15, IF = 16, THEN = 17, ELSE = 18, WHEN = 19, CENTER = 20, 
    TELEPORT = 21, COLISION = 22, WAIT = 23, MOVE = 24, TO = 25, MOVE_3 = 26, 
    AT = 27, IN = 28, FOR = 29, FINISH = 30, PUTNENV = 31, FUNCTION = 32, 
    ENVIRONMENT = 33, SIMULATION = 34, PRINT = 35, BETWEEN = 36, TYPE = 37, 
    SPHERE = 38, HEIGHT = 39, WIDTH = 40, LENGTH = 41, RADIUS = 42, X = 43, 
    Y = 44, Z = 45, DX = 46, DY = 47, DZ = 48, POINT = 49, VELOCITY = 50, 
    SPEED = 51, ASSIGN_OP = 52, MUL = 53, DIV = 54, ADD = 55, SUB = 56, 
    MUL_EQ = 57, DIV_EQ = 58, ADD_EQ = 59, SUB_EQ = 60, EQ_OP = 61, NE_OP = 62, 
    LT_OP = 63, LE_OP = 64, GT_OP = 65, GE_OP = 66, ROLL_OP = 67, PITCH_OP = 68, 
    YAW_OP = 69, COM_OP = 70, SEMICOLON = 71, FLOAT = 72, ID = 73, INT = 74, 
    NEWLINE = 75, WS = 76, COMMENT = 77, BLOCK_COM = 78
  };

  CloudsLexer(antlr4::CharStream *input);
  ~CloudsLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

