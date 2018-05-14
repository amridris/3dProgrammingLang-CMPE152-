
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from d:\UbuntuFiles\CMPE152Ubuntu\cmpe152newlanguage\Clouds.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  CloudsLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, CLOUDS = 11, REPEAT = 12, UNTIL = 13, 
    IF = 14, THEN = 15, ELSE = 16, WHEN = 17, CENTER = 18, TELEPORT = 19, 
    COLISION = 20, WAIT = 21, MOVE = 22, TO = 23, MOVE_3 = 24, AT = 25, 
    IN = 26, FOR = 27, FINISH = 28, PUTNENV = 29, FUNCTION = 30, ENVIRONMENT = 31, 
    SIMULATION = 32, PRINT = 33, BETWEEN = 34, TYPE = 35, SPHERE = 36, HEIGHT = 37, 
    WIDTH = 38, LENGTH = 39, RADIUS = 40, X = 41, Y = 42, Z = 43, POINT = 44, 
    VELOCITY = 45, SPEED = 46, ASSIGN_OP = 47, MUL = 48, DIV = 49, ADD = 50, 
    SUB = 51, MUL_EQ = 52, DIV_EQ = 53, ADD_EQ = 54, SUB_EQ = 55, EQ_OP = 56, 
    NE_OP = 57, LT_OP = 58, LE_OP = 59, GT_OP = 60, GE_OP = 61, ROLL_OP = 62, 
    PITCH_OP = 63, YAW_OP = 64, COM_OP = 65, SEMICOLON = 66, FLOAT = 67, 
    ID = 68, INT = 69, NEWLINE = 70, WS = 71, COMMENT = 72, BLOCK_COM = 73
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

