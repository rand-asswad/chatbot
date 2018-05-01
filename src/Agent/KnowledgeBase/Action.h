#ifndef _ACTION_H
#define _ACTION_H

#include "Sentence.h"
#include "KB.h"

class Action {
public: 
    int id;
    
    static vector<Sentence> makeActionQuery(KB kb , int t);
    String makeActionText(vector<Sentence> a );
private: 
    String string_feed;
    vector<Sentence> logic_feed;
};

#endif //_ACTION_H