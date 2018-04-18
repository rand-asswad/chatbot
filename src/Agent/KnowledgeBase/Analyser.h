/**
 * Project ChatBot
 */


#ifndef _ANALYSER_H
#define _ANALYSER_H

#include "../Parser.h"


class Analyser: public Parser {
public: 
    Lexer lexer;
    
    /**
     * @param words
     * @param grammar
     */
    ParseTree parse(String words, Grammar grammar);
};

#endif //_ANALYSER_H