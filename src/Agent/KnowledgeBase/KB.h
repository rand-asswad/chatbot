#ifndef _KB_H
#define _KB_H

#include <vector>
#include "Sentence.h"
#include "KBAnalyser.h"
#include "Rule.h"

class KB {
public: 

    void tell(KB kb , vector<Sentence> s);
    
    vector<Sentence> ask(KB kb , vector<Sentence> s);
    
    bool entails(KB kb , vector<Sentence> s);
    
    void forwardChain(KB kb , vector<Sentence> s);
    
    bool backwardChain(KB kb , vector<Sentence> query);
    
    vector<Sentence> train(vector<vector<Sentence>> examples);
    
    int nbRules(KB kb);
    
    int nbFacts(KB kn);
private: 
    vector<Sentence> facts;
    KBAnalyser analyser;
    //CNF cnfclause;
    vector<Rule> rules;
};

#endif //_KB_H