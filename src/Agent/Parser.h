#ifndef _PARSER_H
#define _PARSER_H

#include <iostream>
#include "../utils/String.h"

using namespace std;

/**
 * @brief Parses source file into appropriate data types.
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