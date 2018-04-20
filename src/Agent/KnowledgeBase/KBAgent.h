#ifndef _KBAGENT_H
#define _KBAGENT_H

#include "../Agent.h"
#include "Percept.h"
#include "Action.h"
#include "KB.h"


class KBAgent: public Agent {
public: 
    Percept current_percept;
    Action current_action;
    
    KBAgent(KB kb);
protected: 
    KB knowledge_base;
private: 
    int t = 0;
};

#endif //_KBAGENT_H