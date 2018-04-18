#ifndef _ELIZA_H
#define _ELIZA_H

#include "../Agent.h"
#include "Memory.h"
#include "ScriptParser.h"
#include "Key.h"
#include <iostream>
#include <vector>

using namespace std;

class Eliza : public Agent {
public: 
    ScriptParser script;
    Memory memory;
    
    void Eliza(istream*, ostream*, string);

private: 
    string processInput(string input);
    vector<Key> findKeys(string input);
    void processScript() override ;
};

#endif //_ELIZA_H