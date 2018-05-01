/**
 * Project ChatBot
 */


#ifndef _TERMINALCLIENT_H
#define _TERMINALCLIENT_H

#include "../Client.h"
#include "../../utils/String.h"
#include <iostream>
using namespace std;

class TerminalClient: public Client {
public: 
    
    /**
     * @param argc
     * @param argv[]
     */
    int Main(int argc, char* argv[]);
private: 
    
    String getAgentName();
};

#endif //_TERMINALCLIENT_H