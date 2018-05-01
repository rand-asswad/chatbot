#ifndef _KEY_H
#define _KEY_H

#include "Decomp.h"

#include <iostream>
#include <vector>
using namespace std;

class Key {
public: 
    String name;
    int rank;
    vector<Decomp> decomp;

    Key(const String &name, int rank);
private:
    String decompose(String s);
};

#endif //_KEY_H