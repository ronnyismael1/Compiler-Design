
// Generated from scangr.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "scangrParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by scangrParser.
 */
class  scangrVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by scangrParser.
   */
    virtual std::any visitProgram(scangrParser::ProgramContext *context) = 0;

    virtual std::any visitStatement(scangrParser::StatementContext *context) = 0;

    virtual std::any visitKeyword(scangrParser::KeywordContext *context) = 0;

    virtual std::any visitIdentifier(scangrParser::IdentifierContext *context) = 0;

    virtual std::any visitNumber(scangrParser::NumberContext *context) = 0;

    virtual std::any visitSymbol(scangrParser::SymbolContext *context) = 0;


};

