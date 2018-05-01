#ifndef _PERCEPT_H
#define _PERCEPT_H

#include "Sentence.h"
#include <vector>
#include <iostream>
using namespace std;

class Percept {
public: 
    int id;
   vector<Sentence> makePerceptSentence(Percept p );
private: 
    String string_feed;
    vector<Sentence> logic_feed;
};

#endif //_PERCEPT_H