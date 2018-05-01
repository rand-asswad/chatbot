#ifndef _AGENT_H
#define _AGENT_H

#include <iostream>
#include "../utils/String.h"

using namespace std;

class Agent {
public: 
    String name;
    istream* inputStream;
    ostream* outputStream;
    bool quit;
    
    Agent(istream* input, ostream* output);
    void run();
protected:
    virtual String processInput(String) = 0;
    virtual String greetUser() = 0;
    //virtual String bidFarewell() = 0;
};

#endif //_AGENT_H