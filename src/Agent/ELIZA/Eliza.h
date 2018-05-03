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

    Eliza(istream *input, ostream *output, String sourcePath);
private:
    String processInput(String input) override ;
    String greetUser() override ;
    vector<Key*> collectKeys(String input);
    String processSentence(String input);
    void processScript();
};

#endif //_ELIZA_H