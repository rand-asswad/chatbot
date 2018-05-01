#ifndef _DECOMP_H
#define _DECOMP_H

#include <iostream>
#include <vector>
#include "../../utils/String.h"

using namespace std;

class Decomp {
public: 
    String pattern;
    size_t reassembRule;
    vector<String> reassemb;

    Decomp(const String &pattern, bool mem);

private:
    bool mem;
    String nextRule();
    String assemble(String s);
};

#endif //_DECOMP_H