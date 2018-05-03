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
    size_t reassembRule;
    vector<Reasmb*> reassemb;
    Key* key;

    Decomp(Key* key, String scriptLine, Thesaurus thes);
    void newReasmb(String reasmb);

    friend ostream &operator<<(ostream &os, const Decomp &decomp);

private:
    bool mem;
    Reasmb* nextRule();
    String assemble(String s);
};

#endif //_DECOMP_H