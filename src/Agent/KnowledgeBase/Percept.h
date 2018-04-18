/**
 * Project ChatBot
 */


#ifndef _PERCEPT_H
#define _PERCEPT_H

class Percept {
public: 
    int id;
    
    /**
     * @param p
     */
    vector<Sentence> makePerceptSentence(Percept p );
private: 
    String string_feed;
    vector<Sentence> logic_feed;
};

#endif //_PERCEPT_H