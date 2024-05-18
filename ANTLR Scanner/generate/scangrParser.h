
// Generated from scangr.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"




class  scangrParser : public antlr4::Parser {
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

  enum {
    RuleProgram = 0, RuleStatement = 1, RuleKeyword = 2, RuleIdentifier = 3, 
    RuleNumber = 4, RuleSymbol = 5
  };

  explicit scangrParser(antlr4::TokenStream *input);

  scangrParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~scangrParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class StatementContext;
  class KeywordContext;
  class IdentifierContext;
  class NumberContext;
  class SymbolContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    KeywordContext *keyword();
    IdentifierContext *identifier();
    NumberContext *number();
    SymbolContext *symbol();
    antlr4::tree::TerminalNode *NEWLINE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  KeywordContext : public antlr4::ParserRuleContext {
  public:
    KeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *ASM();
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *BREAK();
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *CONST();
    antlr4::tree::TerminalNode *CONSTRUCTOR();
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *DESTRUCTOR();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *DOWNTO();
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *GOTO();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *IMPLEMENTATION();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *INLINE();
    antlr4::tree::TerminalNode *INTERFACE();
    antlr4::tree::TerminalNode *LABEL();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *NIL();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *OBJECT();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *OPERATOR();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *PACKED();
    antlr4::tree::TerminalNode *PROCEDURE();
    antlr4::tree::TerminalNode *PROGRAM();
    antlr4::tree::TerminalNode *RECORD();
    antlr4::tree::TerminalNode *REPEAT();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *SHL();
    antlr4::tree::TerminalNode *SHR();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *THEN();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *UNIT();
    antlr4::tree::TerminalNode *UNTIL();
    antlr4::tree::TerminalNode *USES();
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *XOR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeywordContext* keyword();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *REAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

  class  SymbolContext : public antlr4::ParserRuleContext {
  public:
    SymbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *NE();
    antlr4::tree::TerminalNode *LTEQ();
    antlr4::tree::TerminalNode *GTEQ();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *PLUSEQUAL();
    antlr4::tree::TerminalNode *MINUSEQUAL();
    antlr4::tree::TerminalNode *MULTEQUAL();
    antlr4::tree::TerminalNode *DIVEQUAL();
    antlr4::tree::TerminalNode *CARAT();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *LBRACKET();
    antlr4::tree::TerminalNode *RBRACKET();
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    antlr4::tree::TerminalNode *LCOMMENT();
    antlr4::tree::TerminalNode *RCOMMENT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SymbolContext* symbol();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

