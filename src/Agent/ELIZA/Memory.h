#ifndef _MEMORY_H
#define _MEMORY_H

#include <iostream>
#include <vector>
#include "../../utils/String.h"

using namespace std;

class Memory: public vector<String> {
public: 
    
    Memory() = default;
    
    void save(String);
private: 
    int max;
};

#endif //_MEMORY_H