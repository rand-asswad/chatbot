#ifndef _PARSER_H
#define _PARSER_H

#include <iostream>
#include "../utils/String.h"

using namespace std;
/**
 * @brief Class representing a parser utilized by both agents.
 * 
 * @file Parser.h
 * @author Ergi, Rand, Yuge
 */
class Parser {
public:
    String sourcePath;
    Parser(String sourcePath);
private: 
    void parse();
};

#endif //_PARSER_H