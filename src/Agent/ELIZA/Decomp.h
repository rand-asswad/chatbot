#ifndef _DECOMP_H
#define _DECOMP_H

#include <iostream>
#include <vector>

using namespace std;

class Decomp {
public: 
    string pattern;
    int reassembRule;
    vector<string> reassemb;
    
    Decomp(string p, bool m);
private: 
    bool mem;
    
    string nextRule();
    
    string assemble(string s );
};

#endif //_DECOMP_H