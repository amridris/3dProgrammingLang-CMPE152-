
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from d:\UbuntuFiles\CMPE152Ubuntu\cmpe152newlanguage\Clouds.g4 by ANTLR 4.7.1

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
    Y = 44, Z = 45, POINT = 46, VELOCITY = 47, SPEED = 48, ASSIGN_OP = 49, 
    MUL = 50, DIV = 51, ADD = 52, SUB = 53, MUL_EQ = 54, DIV_EQ = 55, ADD_EQ = 56, 
    SUB_EQ = 57, EQ_OP = 58, NE_OP = 59, LT_OP = 60, LE_OP = 61, GT_OP = 62, 
    GE_OP = 63, ROLL_OP = 64, PITCH_OP = 65, YAW_OP = 66, COM_OP = 67, SEMICOLON = 68, 
    FLOAT = 69, ID = 70, INT = 71, NEWLINE = 72, WS = 73, COMMENT = 74, 
    BLOCK_COM = 75
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

