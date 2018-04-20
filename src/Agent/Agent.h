#ifndef _AGENT_H
#define _AGENT_H

#include <iostream>
using namespace std;

class Agent {
public: 
    string name;
    istream* inputStream;
    ostream* outputStream;
    
    Agent(istream* input, ostream* output);
    void run();
protected:
    virtual string processInput(string) = 0;
};

#endif //_AGENT_H