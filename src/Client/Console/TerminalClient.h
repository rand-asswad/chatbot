/**
 * Project ChatBot
 */


#ifndef _TERMINALCLIENT_H
#define _TERMINALCLIENT_H

#include "../Client.h"


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