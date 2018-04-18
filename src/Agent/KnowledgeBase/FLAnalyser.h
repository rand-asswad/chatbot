/**
 * Project ChatBot
 */


#ifndef _FLANALYSER_H
#define _FLANALYSER_H

#include "Analyser.h"


class FLAnalyser: public Analyser {
public: 
    
    /**
     * @param t
     */
    vector<Sentence> interpret(ParseTree t );
    
    /**
     * @param ps
     */
    vector<Sentence> disambiguate(vector<vector<Sentence>> ps);
};

#endif //_FLANALYSER_H