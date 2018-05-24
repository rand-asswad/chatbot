#ifndef _AGENT_H
#define _AGENT_H

#include <iostream>
#include "../utils/String.h"

using namespace std;


/**
 * @brief Processes input speech and generates output.
 */
class Agent {
public:

    /// Agent name
    String name;

    /// pointer to input stream
    istream* inputStream;
    /// pointer to output stream
    ostream* outputStream;

    /// boolean to quit conversation
    bool quit;

    /**
     * Agent constructor that initializes I/O streams
     * @param input Pointer to input stream
     * @param output Pointer to output stream
     */
    Agent(istream* input, ostream* output);

    /**
     * Runs agent until Agent.quit is true.
     * @param debug if true, displays running processes.
     */
    void run(bool debug = false);
protected:
    /**
     * @brief Pointer to output stream for displaying debug information.\n
     * Can be used to point to a file stream to write a log file.
     */
    ostream* debugger;

    /**
     * Processes input string and generates response.
     * @param input User input
     * @return Processed output
     */
    virtual String processInput(String input) = 0;

    /**
     * Generates greeting at the beginning of the conversation.
     * @return output string.
     */
    virtual String greetUser() = 0;

    //virtual String bidFarewell() = 0;
};

#endif //_AGENT_H