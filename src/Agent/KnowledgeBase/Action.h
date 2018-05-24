#ifndef _ACTION_H
#define _ACTION_H

#include "Sentence.h"
#include "KB.h"
/**
 * @brief Represents an action undertaken by the knowledge-based agent.
 * 
 * Due to the agent being a conversational one, the action will be represented by a string.
 * @file Action.h
 * @author Ergi, Rand, Yuge
 */
class Action {
public: 

    int id; /**< Each action bears a unique number*/
    /**
     * @brief This function generates an action from a query at a given time 
     * 
     * @param kb Represents the knowledge base.
     * @param t  Elapsed time.
     * @return An action in it's logical form.
     */
    static vector<Sentence> makeActionQuery(KB kb , int t);
    /**
     * @brief Converts an action its logical form to its string form
     * 
     * @param a The action expressed in logical terms.
     * @return Text form of an action.
     */
    String makeActionText(vector<Sentence> a );
private: 
    String string_feed; /**< Represents the text form of the action*/
    vector<Sentence> logic_feed; /**< Represents the logical form of the action*/
};

#endif //_ACTION_H