#ifndef _AGENT_H
#define _AGENT_H

#include <iostream>
#include "../utils/String.h"

using namespace std;


/**
 * Abstract class: Agent that processes input speech and generates output.
 */
class Agent {
public:

    String name;            /// Agent name
    istream* inputStream;   /// pointer to input stream
    ostream* outputStream;  /// pointer to output stream
    bool quit;              /// boolean to quit conversation

    /**
     * Agent constructor that initializes I/O streams
     * @param [input] pointer: to input stream
     * @param [output] pointer: to output stream
     */
    Agent(istream* input, ostream* output);

    /**
     * Runs agent until @quit is true.
     * @param [debug] boolean: if true displays running processes.
     */
    void run(bool debug = false);
protected:
    /**
     * pointer: to output stream for displaying debug information.
     * Can point into a file stream to write @log file.
     */
    ostream* debugger;

    /**
     * Processes input string and generates response.
     * Virtual @fn to be implemented in inherited classes.
     * @return output string.
     */
    virtual String processInput(String) = 0;

    /**
     * Generates greeting at the beginning of the conversation.
     * Virtual @fn to be implemented in inherited classes.
     * @return output string.
     */
    virtual String greetUser() = 0;
    //virtual String bidFarewell() = 0;
};

#endif //_AGENT_H