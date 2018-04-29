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
    ScriptParser* script;
    Memory memory;

    Eliza(istream *input, ostream *output, string sourcePath);

private:
    string processInput(string input) override ;
    string greetUser() override ;

    string processSentence(string input);
    vector<Key> findKeys(string input);
    void processScript();
};

#endif //_ELIZA_H