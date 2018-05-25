#ifndef _ANALYSER_H
#define _ANALYSER_H

#include "../Parser.h"

/**
 * @file Analyser.h
 * @author Ergi, Rand, Yuge
 */

/**
 * @brief The analyser is responsible for the different parsing jobs that are used by the agent.
 */
class Analyser: public Parser {
public: 
    Lexer lexer; /**< The lexer that is used by the analyser.*/
    /**
     * @brief This function creates a parse tree given a set of words and a grammar
     * 
     * @param words The words to be transformed into a parse tree.
     * @param grammar The grammar of the language in question.
     * @return A parse tree.
     */
    ParseTree parse(String words, Grammar grammar);
};

#endif //_ANALYSER_H