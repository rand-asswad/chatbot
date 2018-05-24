#ifndef _PARSER_H
#define _PARSER_H

#include <iostream>
#include "../utils/String.h"

using namespace std;
<<<<<<< HEAD
/**
 * @brief Class representing a parser utilized by both agents.
 * 
 * @file Parser.h
 * @author Ergi, Rand, Yuge
=======

/**
 * @brief Parses source file into appropriate data types.
>>>>>>> 056baa0fb044b08367838e6f863d4f9fa4907370
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