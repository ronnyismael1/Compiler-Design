#include <iostream>
#include <fstream>
#include <cctype>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <regex>
#include "scanner.h"
#include "token.h"

Scanner::Scanner()
{
    input.open("test-in.txt");
    if (!input.is_open())
    {
        std::cerr << "Error Opening File." << std::endl;
        exit(1);
    }
}
Scanner::~Scanner()
{
    input.close();
}

Token Scanner::nextToken()
{
    Token token;
    std::string str;
    char c;

    if (!input.good())
    {
        token.type = END_OF_FILE;
        token.value = '\0';
        return token;
    }

    while (input.get(c)) 
    {
        if (c == '\n' || c == '\t') continue;
        if (isspace(c) || c == ';' || c == ',' || c == '=' || c == '(' || c == ')' || c == '[' || c == ']' || c == '{' || c == '}')
        {
            if (!str.empty())
            {
                break;
            }
            else if (c == '+')
            {
                char next;
                input.get(next);
                if (next == '=')
                {
                    return {PLUSEQUAL, "+="};
                }else
                {
                    input.unget();
                    return {PLUSOP, "+"};
                }
                break;
            }
            else if (c == '-')
            {
                char next;
                input.get(next);
                if (next == '=')
                {
                    return {MINUSEQUAL, "-="};
                }else
                {
                    input.unget();
                    return {MINUSOP, "-"};
                }
                break;
            }
            else if (c == '*')
            {
                char next;
                input.get(next);
                if (next == '=')
                {
                    return {MULTOP, "*="};
                }else
                {
                    input.unget();
                    return {MULTOP, "*"};
                }
                break;
            }
            else if (c == '/')
            {
                char next;
                input.get(next);
                if (next == '=')
                {
                    return {DIVEQUAL, "/="};
                }else
                {
                    input.unget();
                    return {DIVOP, "/"};
                }
                break;
            }
            else if (c == ':')
            {
                char next;
                input.get(next);
                if (next == '=')
                {
                    return {ASSIGN, ":="};
                }else
                {
                    input.unget();
                    return {COLON, ":"};
                }
                break;
            }
            else if (c == '=')
            {
                return {EQUAL, "="};
                break;
            }
            else if (c == '<')
            {
                char next;
                input.get(next);
                if (next == '>')
                {
                    return {NE, "<>"};
                }else if (next == '=')
                {
                    return {LTEQ, "<="};
                }
                else
                {
                    input.unget();
                    return {LT, "<"};
                }
                break;
            }
            else if (c == '>')
            {
                char next;
                input.get(next);
                if (next == '=')
                {
                    return {GTEQ, ">="};
                }else
                {
                    input.unget();
                    return {GT, ">"};
                }
                break;
            }
            else if (c == '^')
            {
                return {CARAT, "^"};
                break;
            }
            else if (c == ';')
            {
                return {SEMICOLON, ";"};
                break;
            }
            else if (c == ',')
            {
                return {COMMA, ","};
                break;
            }
            else if (c == '(')
            {
                char next;
                input.get(next);
                if (next == '*')
                {
                    return {LCOMMENT, "(*"};
                }else
                {
                    input.unget();
                    return {LPAREN, "("};
                }
                break;
            }
            else if (c == ')')
            {
                return {RPAREN, ")"};
                break;
            }
            else if (c == '[')
            {
                return {LBRACKET, "["};
                break;
            }
            else if (c == ']')
            {
                return {RBRACKET, "]"};
                break;
            }
            else if (c == '{')
            {
                return {RBRACE, "{"};
                break;
            }
            else if (c == '}')
            {
                return {LBRACE, "}"};
                break;
            }
            else if (c == '*')
            {
                char next;
                input.get(next);
                if (next == ')')
                {
                    return {RCOMMENT, "*)"};
                }else
                {
                    input.unget();
                    return {STAR, "*"};
                }
                break;
            }
            else
            {
                break;
            }
        }
        str += c;
    }

    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    
    static const std::regex realNumber("[-+]?[0-9]*\\.?[0-9]+([eE][-+]?[0-9]+)?");
    static const std::regex integer("[-+]?[0-9]+");

    if (std::regex_match(str, realNumber))
    {
        return {REAL, str};
    }
    else if (std::regex_match(str, integer))
    {
        return {INTEGER, str};
    }


    static const std::unordered_map<std::string, TokenType> map =
    {
        {"and", AND},
        {"array", ARRAY},
        {"asm", ASM},
        {"begin", BEGIN},
        {"break", BREAK},
        {"case", CASE},
        {"const", CONST},
        {"constructor", CONSTRUCTOR},
        {"continue", CONTINUE},
        {"destructor", DESTRUCTOR},
        {"div", DIV},
        {"do", DO},
        {"downto", DOWNTO},
        {"else", ELSE},
        {"end", END},
        {"false", FALSE},
        {"file", FFILE},
        {"for", FOR},
        {"function", FUNCTION},
        {"goto", GOTO},
        {"if", IF},
        {"implementation", IMPLEMENTATION},
        {"in", IN},
        {"inline", INLINE},
        {"interface", INTERFACE},
        {"label", LABEL},
        {"mod", MOD},
        {"nil", NIL},
        {"not", NOT},
        {"object", OBJECT},
        {"of", OF},
        {"on", ON},
        {"operator", OPERATOR},
        {"or", OR},
        {"packed", PACKED},
        {"procedure", PROCEDURE},
        {"program", PROGRAM},
        {"record", RECORD},
        {"repeat", REPEAT},
        {"set", SET},
        {"shl", SHL},
        {"shr", SHR},
        {"string", STRING},
        {"then", THEN},
        {"to", TO},
        {"true", TRUE},
        {"type", TYPE},
        {"unit", UNIT},
        {"until", UNTIL},
        {"uses", USES},
        {"var", VAR},
        {"while", WHILE},
        {"with", WITH},
        {"xor", XOR},
        {"<>", NE},
        {"<=", LTEQ},
        {">=", GTEQ},
        {"+=", PLUSEQUAL},
        {"-=", MINUSEQUAL},
        {"*=", MULTEQUAL},
        {"/=", DIVEQUAL},
        {"(*", LCOMMENT},
        {"*)", RCOMMENT},
        {":", COLON},
        {":=", ASSIGN},
        {";", SEMICOLON},
        {"*", STAR},
        {"integer", INTEGER}
    };

    auto it = map.find(str);
    if (it != map.end())
    {
        return {it->second, str};
    }else
    {
        return {IDENTIFIER, str};
    }
}