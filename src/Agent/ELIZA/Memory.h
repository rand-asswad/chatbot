#ifndef _MEMORY_H
#define _MEMORY_H

#include <iostream>
#include <vector>
using namespace std;

class Memory: public vector<string> {
public: 
    
    Memory();
    
    void save(string);
private: 
    int max;
};

#endif //_MEMORY_H