
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from d:\UbuntuFiles\CMPE152Ubuntu\cmpe152newlanguage\Clouds.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  CloudsLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, CLOUDS = 10, REPEAT = 11, UNTIL = 12, IF = 13, THEN = 14, 
    ELSE = 15, WHEN = 16, CENTER = 17, TELEPORT = 18, COLISION = 19, WAIT = 20, 
    MOVE = 21, TO = 22, MOVE_3 = 23, AT = 24, IN = 25, FOR = 26, FINISH = 27, 
    PUTNENV = 28, FUNCTION = 29, ENVIRONMENT = 30, SIMULATION = 31, PRINT = 32, 
    BETWEEN = 33, TYPE = 34, SPHERE = 35, HEIGHT = 36, WIDTH = 37, LENGTH = 38, 
    RADIUS = 39, X = 40, Y = 41, Z = 42, DX = 43, DY = 44, DZ = 45, POINT = 46, 
    VELOCITY = 47, SPEED = 48, ASSIGN_OP = 49, MUL = 50, DIV = 51, ADD = 52, 
    SUB = 53, MUL_EQ = 54, DIV_EQ = 55, ADD_EQ = 56, SUB_EQ = 57, EQ_OP = 58, 
    NE_OP = 59, LT_OP = 60, LE_OP = 61, GT_OP = 62, GE_OP = 63, ROLL_OP = 64, 
    PITCH_OP = 65, YAW_OP = 66, COM_OP = 67, SEMICOLON = 68, FLOAT = 69, 
    ID = 70, INT = 71, NEWLINE = 72, WS = 73, COMMENT = 74, BLOCK_COM = 75
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

