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

    bool hasWord(String word);
};

#endif //_SYNONYMS_H