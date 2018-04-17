/* Copyright (c) 2012-2017 The ANTLR Project. All rights reserved.
 * Use of this file is governed by the BSD 3-clause license that
 * can be found in the LICENSE.txt file in the project root.
 */
//
//  Created by Mike Lischke on 13.03.16.
//
#include <iostream>
#include <fstream>

#include "antlr4-runtime.h"
#include "CloudsLexer.h"
#include "CloudsParser.h"

using namespace antlrcpp;
using namespace antlr4;
using namespace std;

int main(int, const char **)
{
    ifstream ins;
    ins.open("sample_programs/Assignment6.clouds");

    ANTLRInputStream input(ins);
    CloudsLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    cout << "Tokens:" << endl;
    tokens.fill();
    for (Token *token : tokens.getTokens())
    {
        std::cout << token->toString() << std::endl;
    }

    CloudsParser parser(&tokens);
    tree::ParseTree *tree = parser.program();

    cout << endl << "Parse tree (Lisp format):" << endl;
    std::cout << tree->toStringTree(&parser) << endl;

    return 0;
}
