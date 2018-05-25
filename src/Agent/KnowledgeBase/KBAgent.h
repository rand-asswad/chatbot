#ifndef _KBAGENT_H
#define _KBAGENT_H

#include "../Agent.h"
#include "Percept.h"
#include "Action.h"
#include "KB.h"

/**
 * @file KBAgent.h
 * @author Ergi, Rand, Yuge
 */


/**
 * @brief This class represents the knowledge based agent, an agent that is fed external stimuli (string-like perceptions) and generates plausible actions.
 */
class KBAgent: public Agent {
public: 
    Percept current_percept; //**< The current received percept.*/
    Action current_action;  //**< The current proposed/undertaken action.*/
    /**
     * @brief Constructs a new KBAgent object
     * 
     * @param kb The knowledge base.
     */
    KBAgent(KB kb);
protected: 
    KB knowledge_base; /**< The knowledge base used by the agent.
private: 
    int t = 0; /**< An attribute that measures the elapsed time.
};

#endif //_KBAGENT_H