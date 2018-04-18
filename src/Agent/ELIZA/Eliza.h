/**
 * Project ChatBot
 */


#ifndef _ELIZA_H
#define _ELIZA_H

#include "../Agent.h"


class Eliza: public Agent {
public: 
    ScriptParser script;
    Memory memory;
    
    /**
     * @param in
     * @param out
     * @param scriptPath
     */
    void Eliza(istream in, ostream out, String scriptPath);
private: 
    
    /**
     * @param input
     */
    String processInput(String input);
    
    /**
     * @param input
     */
    vector<Keys> findKeys(String input);
    
    void processScript();
};

#endif //_ELIZA_H