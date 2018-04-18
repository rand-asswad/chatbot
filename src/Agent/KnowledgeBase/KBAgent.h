/**
 * Project ChatBot
 */


#ifndef _KBAGENT_H
#define _KBAGENT_H

#include "../Agent.h"


class KBAgent: public Agent {
public: 
    Percept current_percept;
    Action current_action;
    
    /**
     * @param kb
     */
    void KBAgent(KB kb);
protected: 
    KB knowledge_base;
private: 
    int t = 0;
};

#endif //_KBAGENT_H