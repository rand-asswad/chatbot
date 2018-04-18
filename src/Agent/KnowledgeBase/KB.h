/**
 * Project ChatBot
 */


#ifndef _KB_H
#define _KB_H

class KB {
public: 
    
    /**
     * @param kb 
     * @param s
     */
    void tell(KB kb , vector<Sentence> s);
    
    /**
     * @param kb 
     * @param s
     */
    vector<Sentence> ask(KB kb , vector<Sentence> s);
    
    /**
     * @param kb 
     * @param s
     */
    Boolean entails(KB kb , vector<Sentence> s);
    
    /**
     * @param kb 
     * @param s
     */
    void forwardChain(KB kb , vector<Sentence> s);
    
    /**
     * @param kb 
     * @param query
     */
    Boolean backwardChain(KB kb , vector<Sentence> query);
    
    /**
     * @param examples
     */
    vector<Sentence> train(vector<vector<Sentence>> examples);
    
    /**
     * @param kb
     */
    int nbRules(KB kb);
    
    /**
     * @param kn
     */
    int nbFacts(KB kn);
private: 
    vector<Sentence> facts;
    KBAnalyser analyser;
    CNF cnfclause;
    vector<Rule> rules;
};

#endif //_KB_H