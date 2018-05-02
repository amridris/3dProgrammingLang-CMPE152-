
// Generated from /Users/anahit/Documents/GitLocalRepo/cmpe152newlanguage/Clouds.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  CloudsLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, CLOUDS = 10, REPEAT = 11, UNTIL = 12, IF = 13, THEN = 14, 
    ELSE = 15, WHEN = 16, CENTER = 17, TELEPORT = 18, COLISION = 19, PAUSE = 20, 
    WAIT = 21, MOVE = 22, TO = 23, MOVE_3 = 24, AT = 25, IN = 26, FOR = 27, 
    FINISH = 28, PUTNENV = 29, FUNCTION = 30, ENVIRNOMENT = 31, SIMULATION = 32, 
    PRINT = 33, BETWEEN = 34, TYPE = 35, HEIGHT = 36, WIDTH = 37, LENGTH = 38, 
    RADIUS = 39, X = 40, Y = 41, Z = 42, POINT = 43, VELOCITY = 44, SPEED = 45, 
    MUL = 46, DIV = 47, ADD = 48, SUB = 49, MUL_EQ = 50, DIV_EQ = 51, ADD_EQ = 52, 
    SUB_EQ = 53, EQ_OP = 54, NE_OP = 55, LT_OP = 56, LE_OP = 57, GT_OP = 58, 
    GE_OP = 59, ROLL_OP = 60, PITCH_OP = 61, YAW_OP = 62, COM_OP = 63, SEMICOLON = 64, 
    FLOAT = 65, ID = 66, INT = 67, NEWLINE = 68, WS = 69, COMMENT = 70, 
    BLOCK_COM = 71
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

