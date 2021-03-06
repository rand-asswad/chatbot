#ifndef _FLANALYSER_H
#define _FLANALYSER_H

#include <vector>
#include "Analyser.h"
#include "Sentence.h"

/**
 * @file FLAnalyser.h
 * @author Ergi, Rand, Yuge
 */

/**
 * @brief This class uses the parse tree generated by the parser and translates it into a formal language (a small set of the English language in this case)
 */ 
class FLAnalyser: public Analyser {
public: 
    ParseTree t; /**< Parse tree used by the formal language analyser.*/
    /**
     * @brief This function interprets the parse tree and gives equivalent possible intepretations of the tree.
     * 
     * @return Intepreted sentence.
     */
    vector<Sentence> interpret();
    /**
     * @brief This function disambiguates the different interpreted sentences in order to pick the one that makes the most sense.
     * 
     * @param ps A set of possible sentences.
     * @return The correct intepretation of a sentence.
     */
    vector<Sentence> disambiguate(vector<vector<Sentence>> ps);
};

#endif //_FLANALYSER_H