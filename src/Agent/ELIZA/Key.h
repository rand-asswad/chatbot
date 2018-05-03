#ifndef _KEY_H
#define _KEY_H

#include "Decomp.h"

#include <iostream>
#include <vector>
using namespace std;

class Decomp;

class Key {
public: 
    String name;
    int rank;
    vector<Decomp*> decomp;

    Key(const String &name, int rank);
    Decomp* newDecomp(String scriptLine, Thesaurus thesaurus);

    friend ostream &operator<<(ostream &os, const Key &key);

private:
    String decompose(String s);
};

#endif //_KEY_H