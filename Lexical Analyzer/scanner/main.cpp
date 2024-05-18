#include <iostream>
#include <fstream>
#include "token.h"
#include "scanner.h"

int main()
{
    Scanner scanner;
    std::ofstream output("test-out.txt");
    if (!output) 
    {
        std::cerr << "Could not open output file." << std::endl;
        return 1;
    }
    Token token = scanner.nextToken();

    while (token.type != END_OF_FILE)
    {
        output << token.value << "    " << tokenLabels[token.type] << std::endl; 
        token = scanner.nextToken();
    }
    output.close();
    return 0;
}