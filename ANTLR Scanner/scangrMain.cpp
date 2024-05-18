#include <iostream>
#include <fstream>

#include "generate/src/antlr4-runtime.h"
#include "generate/scangrLexer.h"

using namespace antlrcpp;
using namespace antlr4;
using namespace std;

int main(int argc, const char *args[])
{
    if (argc < 3) {
        cerr << "Usage: scangrMain <input_file> <output_file>" << endl;
        return 1;
    }

    ifstream source;
    ofstream output;

    source.open(args[1]);
    ANTLRInputStream input(source);
    scangrLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    // Open the output file.
    output.open(args[2]);

    // Print the token stream.
    output << "Tokens:" << endl;
    tokens.fill();
    for (Token *token : tokens.getTokens())
    {
        output << token->toString() << endl;
    }

    source.close();
    output.close();

    return 0;
}



//g++ -I C:\antlr4\antlr4-cpp-runtime-4.12.0-source\runtime -o scangrMain scangrMain.cpp scangrLexer.cpp /usr/local/lib/libantlr4-runtime.a
//g++ -I C:\Users\rismael\Documents\SJSU\Coding Projects\SJSU\2023\S23\CMPE152\Homework\anytime-assignment-4\src -o scangrMain scangrMain.cpp
//g++ -I generate -I generate/src -o scangrMain.cpp generate/scangrLexer.cpp