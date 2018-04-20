#ifndef _PARSER_H
#define _PARSER_H

#include <iostream>
using namespace std;

class Parser {
public:
    string sourcePath;
    Parser(string sourcePath);
private: 
    void parse();
};

#endif //_PARSER_H