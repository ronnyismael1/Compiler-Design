
// Generated from scangr.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"




class  scangrLexer : public antlr4::Lexer {
public:
  enum {
    AND = 1, ARRAY = 2, ASM = 3, BEGIN = 4, BREAK = 5, CASE = 6, CONST = 7, 
    CONSTRUCTOR = 8, CONTINUE = 9, DESTRUCTOR = 10, DIV = 11, DO = 12, DOWNTO = 13, 
    ELSE = 14, END = 15, FALSE = 16, FILE = 17, FOR = 18, FUNCTION = 19, 
    GOTO = 20, IF = 21, IMPLEMENTATION = 22, IN = 23, INLINE = 24, INTERFACE = 25, 
    LABEL = 26, MOD = 27, NIL = 28, NOT = 29, OBJECT = 30, OF = 31, ON = 32, 
    OPERATOR = 33, OR = 34, PACKED = 35, PROCEDURE = 36, PROGRAM = 37, RECORD = 38, 
    REPEAT = 39, SET = 40, SHL = 41, SHR = 42, STRING = 43, THEN = 44, TO = 45, 
    TRUE = 46, TYPE = 47, UNIT = 48, UNTIL = 49, USES = 50, VAR = 51, WHILE = 52, 
    WITH = 53, XOR = 54, IDENTIFIER = 55, INTEGER = 56, REAL = 57, ASSIGN = 58, 
    EQUAL = 59, NE = 60, LTEQ = 61, GTEQ = 62, LT = 63, GT = 64, PLUSEQUAL = 65, 
    MINUSEQUAL = 66, MULTEQUAL = 67, DIVEQUAL = 68, CARAT = 69, SEMICOLON = 70, 
    COMMA = 71, LPAREN = 72, RPAREN = 73, LBRACKET = 74, RBRACKET = 75, 
    LBRACE = 76, RBRACE = 77, LCOMMENT = 78, RCOMMENT = 79, NEWLINE = 80, 
    WS = 81
  };

  explicit scangrLexer(antlr4::CharStream *input);

  ~scangrLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

