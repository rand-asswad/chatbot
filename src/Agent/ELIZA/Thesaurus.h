#ifndef _THESAURUS_H
#define _THESAURUS_H

#include "Synonyms.h"

#include <iostream>
using namespace std;

class Thesaurus : public vector<Synonyms> {
public: 
    
    Thesaurus() = default;
    
    Synonyms findSynonyms(string word);
};

#endif //_THESAURUS_H