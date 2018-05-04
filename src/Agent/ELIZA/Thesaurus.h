#ifndef _THESAURUS_H
#define _THESAURUS_H

#include "Synonyms.h"

#include <iostream>
using namespace std;

class Thesaurus : public vector<Synonyms*> {
public: 
    
    Thesaurus() = default;
    
    Synonyms* findSynonyms(String word);

    friend ostream &operator<<(ostream &os, const Thesaurus &thesaurus);
};

#endif //_THESAURUS_H