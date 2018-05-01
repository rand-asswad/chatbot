#ifndef _PARSER_H
#define _PARSER_H

#include <iostream>
#include "../utils/String.h"

using namespace std;

class Parser {
public:
    String sourcePath;
    Parser(String sourcePath);
private: 
    void parse();
};

#endif //_PARSER_H