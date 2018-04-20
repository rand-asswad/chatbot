#ifndef _FLANALYSER_H
#define _FLANALYSER_H

#include <vector>
#include "Analyser.h"
#include "Sentence.h"


class FLAnalyser: public Analyser {
public: 
    
    vector<Sentence> interpret();//ParseTree t );
    vector<Sentence> disambiguate(vector<vector<Sentence>> ps);
};

#endif //_FLANALYSER_H