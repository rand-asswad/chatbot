#ifndef _KEY_H
#define _KEY_H

#include "Decomp.h"

#include <iostream>
#include <vector>
using namespace std;

class Key {
public: 
    string name;
    int rank;
    vector<Decomp> decomp;

    Key(const string &name, int rank);

private:
    string decompose(string s );
};

#endif //_KEY_H