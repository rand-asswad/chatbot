#ifndef _SYNONYMS_H
#define _SYNONYMS_H

#include <iostream>
#include <vector>

using namespace std;


class Synonyms: private vector<string> {
public: 
    
    bool hasWord(string word);
};

#endif //_SYNONYMS_H