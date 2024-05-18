
// Generated from scangr.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "scangrVisitor.h"


/**
 * This class provides an empty implementation of scangrVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  scangrBaseVisitor : public scangrVisitor {
public:

  virtual std::any visitProgram(scangrParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(scangrParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitKeyword(scangrParser::KeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifier(scangrParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumber(scangrParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSymbol(scangrParser::SymbolContext *ctx) override {
    return visitChildren(ctx);
  }


};

