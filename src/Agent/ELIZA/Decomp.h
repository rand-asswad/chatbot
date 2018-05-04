#ifndef _DECOMP_H
#define _DECOMP_H

#include <iostream>
#include <vector>
#include "../../utils/String.h"
#include "Thesaurus.h"
#include "Key.h"
#include "Reasmb.h"

using namespace std;

class Key;
class Reasmb;

class Decomp {
public: 
    String pattern;
    vector<Reasmb*> reassemb;
    Key* key;

    Decomp(Key* key, String scriptLine, Thesaurus thes);
    void newReasmb(String reasmb);
    vector<String> decompose(String str);

    friend ostream &operator<<(ostream &os, const Decomp &decomp);

    Reasmb* nextRule();
    bool mem;
private:
    size_t reassembRule = -1;
};

#endif //_DECOMP_H