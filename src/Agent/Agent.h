/**
 * Project ChatBot
 */


#ifndef _AGENT_H
#define _AGENT_H

class Agent {
public: 
    String name;
    istream inputStream;
    ostream outputStream;
    
    /**
     * @param istream
     * @param ostream
     */
    void Agent(void istream, void ostream);
    
    void run();
protected: 
    
    /**
     * @param input
     */
    String processInput(String input);
};

#endif //_AGENT_H