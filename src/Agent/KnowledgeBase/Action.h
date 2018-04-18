/**
 * Project ChatBot
 */


#ifndef _ACTION_H
#define _ACTION_H

class Action {
public: 
    int id;
    
    /**
     * @param kb 
     * @param t
     */
    static vector<Sentence> makeActionQuery(KB kb , int t);
    
    /**
     * @param a
     */
    String makeActionText(vector<Sentence> a );
private: 
    String string_feed;
    vector<Sentence> logic_feed;
};

#endif //_ACTION_H