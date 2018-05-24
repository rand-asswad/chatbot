#ifndef _THESAURUS_H
#define _THESAURUS_H

#include "Synonyms.h"

#include <iostream>
using namespace std;

/// @brief List of Synonyms objects
class Thesaurus : public vector<Synonyms*> {
public: 
    
    Thesaurus() = default;

    /**
     * Finds Synonyms object containing a given word. Calls Synonyms::hasWord\n
     * If none found, returns a new synonyms list containing only the given word.
     * @param word
     * @return pointer to synonyms object containing word
     */
    Synonyms* findSynonyms(String word);

    friend ostream &operator<<(ostream &os, const Thesaurus &thesaurus);
};

#endif //_THESAURUS_H