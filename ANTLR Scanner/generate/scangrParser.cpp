
// Generated from scangr.g4 by ANTLR 4.12.0


#include "scangrVisitor.h"

#include "scangrParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct ScangrParserStaticData final {
  ScangrParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ScangrParserStaticData(const ScangrParserStaticData&) = delete;
  ScangrParserStaticData(ScangrParserStaticData&&) = delete;
  ScangrParserStaticData& operator=(const ScangrParserStaticData&) = delete;
  ScangrParserStaticData& operator=(ScangrParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag scangrParserOnceFlag;
ScangrParserStaticData *scangrParserStaticData = nullptr;

void scangrParserInitialize() {
  assert(scangrParserStaticData == nullptr);
  auto staticData = std::make_unique<ScangrParserStaticData>(
    std::vector<std::string>{
      "program", "statement", "keyword", "identifier", "number", "symbol"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "':='", "'='", "'<>'", "'<='", "'>='", 
      "'<'", "'>'", "'+='", "'-='", "'*='", "'/='", "'^'", "';'", "','", 
      "'('", "')'", "'['", "']'", "'{'", "'}'", "'(*'", "'*)'"
    },
    std::vector<std::string>{
      "", "AND", "ARRAY", "ASM", "BEGIN", "BREAK", "CASE", "CONST", "CONSTRUCTOR", 
      "CONTINUE", "DESTRUCTOR", "DIV", "DO", "DOWNTO", "ELSE", "END", "FALSE", 
      "FILE", "FOR", "FUNCTION", "GOTO", "IF", "IMPLEMENTATION", "IN", "INLINE", 
      "INTERFACE", "LABEL", "MOD", "NIL", "NOT", "OBJECT", "OF", "ON", "OPERATOR", 
      "OR", "PACKED", "PROCEDURE", "PROGRAM", "RECORD", "REPEAT", "SET", 
      "SHL", "SHR", "STRING", "THEN", "TO", "TRUE", "TYPE", "UNIT", "UNTIL", 
      "USES", "VAR", "WHILE", "WITH", "XOR", "IDENTIFIER", "INTEGER", "REAL", 
      "ASSIGN", "EQUAL", "NE", "LTEQ", "GTEQ", "LT", "GT", "PLUSEQUAL", 
      "MINUSEQUAL", "MULTEQUAL", "DIVEQUAL", "CARAT", "SEMICOLON", "COMMA", 
      "LPAREN", "RPAREN", "LBRACKET", "RBRACKET", "LBRACE", "RBRACE", "LCOMMENT", 
      "RCOMMENT", "NEWLINE", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,81,33,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,1,0,4,0,14,
  	8,0,11,0,12,0,15,1,1,1,1,1,1,1,1,1,1,3,1,23,8,1,1,2,1,2,1,3,1,3,1,4,1,
  	4,1,5,1,5,1,5,0,0,6,0,2,4,6,8,10,0,3,1,0,1,54,1,0,56,57,1,0,58,79,31,
  	0,13,1,0,0,0,2,22,1,0,0,0,4,24,1,0,0,0,6,26,1,0,0,0,8,28,1,0,0,0,10,30,
  	1,0,0,0,12,14,3,2,1,0,13,12,1,0,0,0,14,15,1,0,0,0,15,13,1,0,0,0,15,16,
  	1,0,0,0,16,1,1,0,0,0,17,23,3,4,2,0,18,23,3,6,3,0,19,23,3,8,4,0,20,23,
  	3,10,5,0,21,23,5,80,0,0,22,17,1,0,0,0,22,18,1,0,0,0,22,19,1,0,0,0,22,
  	20,1,0,0,0,22,21,1,0,0,0,23,3,1,0,0,0,24,25,7,0,0,0,25,5,1,0,0,0,26,27,
  	5,55,0,0,27,7,1,0,0,0,28,29,7,1,0,0,29,9,1,0,0,0,30,31,7,2,0,0,31,11,
  	1,0,0,0,2,15,22
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  scangrParserStaticData = staticData.release();
}

}

scangrParser::scangrParser(TokenStream *input) : scangrParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

scangrParser::scangrParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  scangrParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *scangrParserStaticData->atn, scangrParserStaticData->decisionToDFA, scangrParserStaticData->sharedContextCache, options);
}

scangrParser::~scangrParser() {
  delete _interpreter;
}

const atn::ATN& scangrParser::getATN() const {
  return *scangrParserStaticData->atn;
}

std::string scangrParser::getGrammarFileName() const {
  return "scangr.g4";
}

const std::vector<std::string>& scangrParser::getRuleNames() const {
  return scangrParserStaticData->ruleNames;
}

const dfa::Vocabulary& scangrParser::getVocabulary() const {
  return scangrParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView scangrParser::getSerializedATN() const {
  return scangrParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

scangrParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<scangrParser::StatementContext *> scangrParser::ProgramContext::statement() {
  return getRuleContexts<scangrParser::StatementContext>();
}

scangrParser::StatementContext* scangrParser::ProgramContext::statement(size_t i) {
  return getRuleContext<scangrParser::StatementContext>(i);
}


size_t scangrParser::ProgramContext::getRuleIndex() const {
  return scangrParser::RuleProgram;
}


std::any scangrParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<scangrVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

scangrParser::ProgramContext* scangrParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, scangrParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(13); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(12);
      statement();
      setState(15); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -2) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 131071) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

scangrParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

scangrParser::KeywordContext* scangrParser::StatementContext::keyword() {
  return getRuleContext<scangrParser::KeywordContext>(0);
}

scangrParser::IdentifierContext* scangrParser::StatementContext::identifier() {
  return getRuleContext<scangrParser::IdentifierContext>(0);
}

scangrParser::NumberContext* scangrParser::StatementContext::number() {
  return getRuleContext<scangrParser::NumberContext>(0);
}

scangrParser::SymbolContext* scangrParser::StatementContext::symbol() {
  return getRuleContext<scangrParser::SymbolContext>(0);
}

tree::TerminalNode* scangrParser::StatementContext::NEWLINE() {
  return getToken(scangrParser::NEWLINE, 0);
}


size_t scangrParser::StatementContext::getRuleIndex() const {
  return scangrParser::RuleStatement;
}


std::any scangrParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<scangrVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

scangrParser::StatementContext* scangrParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, scangrParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(22);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case scangrParser::AND:
      case scangrParser::ARRAY:
      case scangrParser::ASM:
      case scangrParser::BEGIN:
      case scangrParser::BREAK:
      case scangrParser::CASE:
      case scangrParser::CONST:
      case scangrParser::CONSTRUCTOR:
      case scangrParser::CONTINUE:
      case scangrParser::DESTRUCTOR:
      case scangrParser::DIV:
      case scangrParser::DO:
      case scangrParser::DOWNTO:
      case scangrParser::ELSE:
      case scangrParser::END:
      case scangrParser::FALSE:
      case scangrParser::FILE:
      case scangrParser::FOR:
      case scangrParser::FUNCTION:
      case scangrParser::GOTO:
      case scangrParser::IF:
      case scangrParser::IMPLEMENTATION:
      case scangrParser::IN:
      case scangrParser::INLINE:
      case scangrParser::INTERFACE:
      case scangrParser::LABEL:
      case scangrParser::MOD:
      case scangrParser::NIL:
      case scangrParser::NOT:
      case scangrParser::OBJECT:
      case scangrParser::OF:
      case scangrParser::ON:
      case scangrParser::OPERATOR:
      case scangrParser::OR:
      case scangrParser::PACKED:
      case scangrParser::PROCEDURE:
      case scangrParser::PROGRAM:
      case scangrParser::RECORD:
      case scangrParser::REPEAT:
      case scangrParser::SET:
      case scangrParser::SHL:
      case scangrParser::SHR:
      case scangrParser::STRING:
      case scangrParser::THEN:
      case scangrParser::TO:
      case scangrParser::TRUE:
      case scangrParser::TYPE:
      case scangrParser::UNIT:
      case scangrParser::UNTIL:
      case scangrParser::USES:
      case scangrParser::VAR:
      case scangrParser::WHILE:
      case scangrParser::WITH:
      case scangrParser::XOR: {
        enterOuterAlt(_localctx, 1);
        setState(17);
        keyword();
        break;
      }

      case scangrParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(18);
        identifier();
        break;
      }

      case scangrParser::INTEGER:
      case scangrParser::REAL: {
        enterOuterAlt(_localctx, 3);
        setState(19);
        number();
        break;
      }

      case scangrParser::ASSIGN:
      case scangrParser::EQUAL:
      case scangrParser::NE:
      case scangrParser::LTEQ:
      case scangrParser::GTEQ:
      case scangrParser::LT:
      case scangrParser::GT:
      case scangrParser::PLUSEQUAL:
      case scangrParser::MINUSEQUAL:
      case scangrParser::MULTEQUAL:
      case scangrParser::DIVEQUAL:
      case scangrParser::CARAT:
      case scangrParser::SEMICOLON:
      case scangrParser::COMMA:
      case scangrParser::LPAREN:
      case scangrParser::RPAREN:
      case scangrParser::LBRACKET:
      case scangrParser::RBRACKET:
      case scangrParser::LBRACE:
      case scangrParser::RBRACE:
      case scangrParser::LCOMMENT:
      case scangrParser::RCOMMENT: {
        enterOuterAlt(_localctx, 4);
        setState(20);
        symbol();
        break;
      }

      case scangrParser::NEWLINE: {
        enterOuterAlt(_localctx, 5);
        setState(21);
        match(scangrParser::NEWLINE);
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

//----------------- KeywordContext ------------------------------------------------------------------

scangrParser::KeywordContext::KeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* scangrParser::KeywordContext::AND() {
  return getToken(scangrParser::AND, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::ARRAY() {
  return getToken(scangrParser::ARRAY, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::ASM() {
  return getToken(scangrParser::ASM, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::BEGIN() {
  return getToken(scangrParser::BEGIN, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::BREAK() {
  return getToken(scangrParser::BREAK, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::CASE() {
  return getToken(scangrParser::CASE, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::CONST() {
  return getToken(scangrParser::CONST, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::CONSTRUCTOR() {
  return getToken(scangrParser::CONSTRUCTOR, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::CONTINUE() {
  return getToken(scangrParser::CONTINUE, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::DESTRUCTOR() {
  return getToken(scangrParser::DESTRUCTOR, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::DIV() {
  return getToken(scangrParser::DIV, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::DO() {
  return getToken(scangrParser::DO, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::DOWNTO() {
  return getToken(scangrParser::DOWNTO, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::ELSE() {
  return getToken(scangrParser::ELSE, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::END() {
  return getToken(scangrParser::END, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::FALSE() {
  return getToken(scangrParser::FALSE, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::FILE() {
  return getToken(scangrParser::FILE, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::FOR() {
  return getToken(scangrParser::FOR, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::FUNCTION() {
  return getToken(scangrParser::FUNCTION, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::GOTO() {
  return getToken(scangrParser::GOTO, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::IF() {
  return getToken(scangrParser::IF, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::IMPLEMENTATION() {
  return getToken(scangrParser::IMPLEMENTATION, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::IN() {
  return getToken(scangrParser::IN, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::INLINE() {
  return getToken(scangrParser::INLINE, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::INTERFACE() {
  return getToken(scangrParser::INTERFACE, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::LABEL() {
  return getToken(scangrParser::LABEL, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::MOD() {
  return getToken(scangrParser::MOD, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::NIL() {
  return getToken(scangrParser::NIL, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::NOT() {
  return getToken(scangrParser::NOT, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::OBJECT() {
  return getToken(scangrParser::OBJECT, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::OF() {
  return getToken(scangrParser::OF, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::ON() {
  return getToken(scangrParser::ON, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::OPERATOR() {
  return getToken(scangrParser::OPERATOR, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::OR() {
  return getToken(scangrParser::OR, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::PACKED() {
  return getToken(scangrParser::PACKED, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::PROCEDURE() {
  return getToken(scangrParser::PROCEDURE, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::PROGRAM() {
  return getToken(scangrParser::PROGRAM, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::RECORD() {
  return getToken(scangrParser::RECORD, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::REPEAT() {
  return getToken(scangrParser::REPEAT, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::SET() {
  return getToken(scangrParser::SET, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::SHL() {
  return getToken(scangrParser::SHL, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::SHR() {
  return getToken(scangrParser::SHR, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::STRING() {
  return getToken(scangrParser::STRING, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::THEN() {
  return getToken(scangrParser::THEN, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::TO() {
  return getToken(scangrParser::TO, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::TRUE() {
  return getToken(scangrParser::TRUE, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::TYPE() {
  return getToken(scangrParser::TYPE, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::UNIT() {
  return getToken(scangrParser::UNIT, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::UNTIL() {
  return getToken(scangrParser::UNTIL, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::USES() {
  return getToken(scangrParser::USES, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::VAR() {
  return getToken(scangrParser::VAR, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::WHILE() {
  return getToken(scangrParser::WHILE, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::WITH() {
  return getToken(scangrParser::WITH, 0);
}

tree::TerminalNode* scangrParser::KeywordContext::XOR() {
  return getToken(scangrParser::XOR, 0);
}


size_t scangrParser::KeywordContext::getRuleIndex() const {
  return scangrParser::RuleKeyword;
}


std::any scangrParser::KeywordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<scangrVisitor*>(visitor))
    return parserVisitor->visitKeyword(this);
  else
    return visitor->visitChildren(this);
}

scangrParser::KeywordContext* scangrParser::keyword() {
  KeywordContext *_localctx = _tracker.createInstance<KeywordContext>(_ctx, getState());
  enterRule(_localctx, 4, scangrParser::RuleKeyword);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(24);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 36028797018963966) != 0))) {
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

//----------------- IdentifierContext ------------------------------------------------------------------

scangrParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* scangrParser::IdentifierContext::IDENTIFIER() {
  return getToken(scangrParser::IDENTIFIER, 0);
}


size_t scangrParser::IdentifierContext::getRuleIndex() const {
  return scangrParser::RuleIdentifier;
}


std::any scangrParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<scangrVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

scangrParser::IdentifierContext* scangrParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 6, scangrParser::RuleIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(26);
    match(scangrParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

scangrParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* scangrParser::NumberContext::INTEGER() {
  return getToken(scangrParser::INTEGER, 0);
}

tree::TerminalNode* scangrParser::NumberContext::REAL() {
  return getToken(scangrParser::REAL, 0);
}


size_t scangrParser::NumberContext::getRuleIndex() const {
  return scangrParser::RuleNumber;
}


std::any scangrParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<scangrVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

scangrParser::NumberContext* scangrParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 8, scangrParser::RuleNumber);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(28);
    _la = _input->LA(1);
    if (!(_la == scangrParser::INTEGER

    || _la == scangrParser::REAL)) {
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

//----------------- SymbolContext ------------------------------------------------------------------

scangrParser::SymbolContext::SymbolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* scangrParser::SymbolContext::ASSIGN() {
  return getToken(scangrParser::ASSIGN, 0);
}

tree::TerminalNode* scangrParser::SymbolContext::EQUAL() {
  return getToken(scangrParser::EQUAL, 0);
}

tree::TerminalNode* scangrParser::SymbolContext::NE() {
  return getToken(scangrParser::NE, 0);
}

tree::TerminalNode* scangrParser::SymbolContext::LTEQ() {
  return getToken(scangrParser::LTEQ, 0);
}

tree::TerminalNode* scangrParser::SymbolContext::GTEQ() {
  return getToken(scangrParser::GTEQ, 0);
}

tree::TerminalNode* scangrParser::SymbolContext::LT() {
  return getToken(scangrParser::LT, 0);
}

tree::TerminalNode* scangrParser::SymbolContext::GT() {
  return getToken(scangrParser::GT, 0);
}

tree::TerminalNode* scangrParser::SymbolContext::PLUSEQUAL() {
  return getToken(scangrParser::PLUSEQUAL, 0);
}

tree::TerminalNode* scangrParser::SymbolContext::MINUSEQUAL() {
  return getToken(scangrParser::MINUSEQUAL, 0);
}

tree::TerminalNode* scangrParser::SymbolContext::MULTEQUAL() {
  return getToken(scangrParser::MULTEQUAL, 0);
}

tree::TerminalNode* scangrParser::SymbolContext::DIVEQUAL() {
  return getToken(scangrParser::DIVEQUAL, 0);
}

tree::TerminalNode* scangrParser::SymbolContext::CARAT() {
  return getToken(scangrParser::CARAT, 0);
}

tree::TerminalNode* scangrParser::SymbolContext::SEMICOLON() {
  return getToken(scangrParser::SEMICOLON, 0);
}

tree::TerminalNode* scangrParser::SymbolContext::COMMA() {
  return getToken(scangrParser::COMMA, 0);
}

tree::TerminalNode* scangrParser::SymbolContext::LPAREN() {
  return getToken(scangrParser::LPAREN, 0);
}

tree::TerminalNode* scangrParser::SymbolContext::RPAREN() {
  return getToken(scangrParser::RPAREN, 0);
}

tree::TerminalNode* scangrParser::SymbolContext::LBRACKET() {
  return getToken(scangrParser::LBRACKET, 0);
}

tree::TerminalNode* scangrParser::SymbolContext::RBRACKET() {
  return getToken(scangrParser::RBRACKET, 0);
}

tree::TerminalNode* scangrParser::SymbolContext::LBRACE() {
  return getToken(scangrParser::LBRACE, 0);
}

tree::TerminalNode* scangrParser::SymbolContext::RBRACE() {
  return getToken(scangrParser::RBRACE, 0);
}

tree::TerminalNode* scangrParser::SymbolContext::LCOMMENT() {
  return getToken(scangrParser::LCOMMENT, 0);
}

tree::TerminalNode* scangrParser::SymbolContext::RCOMMENT() {
  return getToken(scangrParser::RCOMMENT, 0);
}


size_t scangrParser::SymbolContext::getRuleIndex() const {
  return scangrParser::RuleSymbol;
}


std::any scangrParser::SymbolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<scangrVisitor*>(visitor))
    return parserVisitor->visitSymbol(this);
  else
    return visitor->visitChildren(this);
}

scangrParser::SymbolContext* scangrParser::symbol() {
  SymbolContext *_localctx = _tracker.createInstance<SymbolContext>(_ctx, getState());
  enterRule(_localctx, 10, scangrParser::RuleSymbol);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(30);
    _la = _input->LA(1);
    if (!(((((_la - 58) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 58)) & 4194303) != 0))) {
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

void scangrParser::initialize() {
  ::antlr4::internal::call_once(scangrParserOnceFlag, scangrParserInitialize);
}
