
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from d:\UbuntuFiles\CMPE152Ubuntu\cmpe152newlanguage\Clouds.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  CloudsLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, CLOUDS = 12, REPEAT = 13, 
    UNTIL = 14, IF = 15, THEN = 16, ELSE = 17, WHEN = 18, CENTER = 19, TELEPORT = 20, 
    COLISION = 21, WAIT = 22, MOVE = 23, TO = 24, MOVE_3 = 25, AT = 26, 
    IN = 27, FOR = 28, FINISH = 29, PUTNENV = 30, FUNCTION = 31, ENVIRONMENT = 32, 
    SIMULATION = 33, PRINT = 34, BETWEEN = 35, TYPE = 36, SPHERE = 37, HEIGHT = 38, 
    WIDTH = 39, LENGTH = 40, RADIUS = 41, X = 42, Y = 43, Z = 44, DX = 45, 
    DY = 46, DZ = 47, POINT = 48, VELOCITY = 49, SPEED = 50, ASSIGN_OP = 51, 
    MUL = 52, DIV = 53, ADD = 54, SUB = 55, MUL_EQ = 56, DIV_EQ = 57, ADD_EQ = 58, 
    SUB_EQ = 59, EQ_OP = 60, NE_OP = 61, LT_OP = 62, LE_OP = 63, GT_OP = 64, 
    GE_OP = 65, ROLL_OP = 66, PITCH_OP = 67, YAW_OP = 68, COM_OP = 69, SEMICOLON = 70, 
    FLOAT = 71, ID = 72, INT = 73, NEWLINE = 74, WS = 75, COMMENT = 76, 
    BLOCK_COM = 77
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

