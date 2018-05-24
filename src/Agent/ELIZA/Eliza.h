#ifndef _ELIZA_H
#define _ELIZA_H

#include "../Agent.h"
#include "Memory.h"
#include "Script.h"
#include "Key.h"
#include <iostream>
#include <vector>

using namespace std;


/**
 * @brief Agent based on Weizenbaum's ELIZA conversational agent.
 */
class Eliza : public Agent {
public:
    /// Database parser for ELIZA
    Script* script;

    /// Memory stack
    Memory memory;

    /**
     * Default constructor for Eliza. Calls inherited constructor and sets Agent.name and memory.
     * See Agent.Agent()
     */
    Eliza(istream *input, ostream *output, String sourcePath);
private:
    String processInput(String input) override;
    String greetUser() override;

    vector<Key*> collectKeys(String input);
    String processSentence(String input);
    String decomposeOnKey(Decomp *decomp, String input);
};

#endif //_ELIZA_H