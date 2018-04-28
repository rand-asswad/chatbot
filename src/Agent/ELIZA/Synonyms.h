#ifndef _SYNONYMS_H
#define _SYNONYMS_H

#include <iostream>
#include <vector>

using namespace std;


class Synonyms: public vector<string> {
public:
    Synonyms(const vector<string> &__x);

    bool hasWord(string word);
};

#endif //_SYNONYMS_H