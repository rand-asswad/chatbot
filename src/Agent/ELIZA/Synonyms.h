#ifndef _SYNONYMS_H
#define _SYNONYMS_H

#include <iostream>
#include <vector>
#include "../../utils/String.h"

using namespace std;


class Synonyms: public vector<String> {
public:
    Synonyms(const String word);
    Synonyms(const vector<String> &__x);

    String asRegex();

    bool hasWord(String word);

    friend ostream &operator<<(ostream &os, const Synonyms &synonyms);
};

#endif //_SYNONYMS_H