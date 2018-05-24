#ifndef _MEMORY_H
#define _MEMORY_H

#include <iostream>
#include "Reasmb.h"

using namespace std;

///@brief FIFO stack of Reasmb objects.
class Memory: vector<Reasmb*> {
public: 
    
    Memory() = default;

    /// Saves new reassembly rule in memory
    void save(Reasmb*);

    /// Pops first reassembly rule from memory
    Reasmb* pop();
private:
    /// Memory capacity
    size_t max = 20; //default
};

#endif //_MEMORY_H