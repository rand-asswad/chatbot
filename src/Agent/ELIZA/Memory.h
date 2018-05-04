#ifndef _MEMORY_H
#define _MEMORY_H

#include <iostream>
#include "Reasmb.h"

using namespace std;

class Memory: vector<Reasmb*> {
public: 
    
    Memory() = default;
    
    void save(Reasmb*);
    Reasmb* pop();
private: 
    size_t max = 20; //default
};

#endif //_MEMORY_H