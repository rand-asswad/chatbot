#ifndef _PARSER_H
#define _PARSER_H

#include <iostream>
#include "../utils/String.h"

using namespace std;
/**
 * @brief Abstract class representing a parser utilized by both agents.
 * @file Parser.h
 * @author Ergi, Rand, Yuge
=======
 */
class Parser {
public:
    /// Source file path
    String sourcePath;

    /**
     * Parser default constructor.
     * @param sourcePath source file path
     */
    Parser(String sourcePath);

protected:
    /**
     * Called by constructor to parse data from source file.
     */
    virtual void parse() = 0;
};

#endif //_PARSER_H