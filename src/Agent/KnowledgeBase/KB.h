#ifndef _KB_H
#define _KB_H

#include <vector>
#include "Sentence.h"
#include "KBAnalyser.h"
#include "Rule.h"
/**
 * @file KB.h
 * @author Ergi, Rand , Yuge
 */

/**
 * @brief This class represents our knowledge base.
 * 
 * The knowledge base holds all the logical sentences and facts which can later be used to infer new facts, ask the database and train the aforementioned.
 */ 
class KB {
public: 
    /**
     * @brief This function adds a new rule to the knowledge base.
     * 
     * @param kb The knowledge base.
     * @param s A rule in the form of a logical sentence.
     */
    void tell(KB kb , vector<Sentence> s);
    /**
     * @brief This function queries the knowledge base and presents the best course of action for the agent to undertake.
     * 
     * @param kb The knowledge base.
     * @param s A question in the form of a logical sentence.
     * @return An action in the form of a sentence.
     */
    vector<Sentence> ask(KB kb , vector<Sentence> s);
    /**
     * @brief This function checks if a new rule/sentence is logical accordance with the existant rules.
     * 
     * @param kb The knowledge base.
     * @param s A logical sentence.
     * @return true If the sentence is in accordance with the existant rules.
     * @return false If the sentence clashes with the existant rules.
     */
    bool entails(KB kb , vector<Sentence> s);
    /**
     * @brief This function is responsible for deducing new sentences/rules from already existing ones by using the forward chain algorithm.
     * 
     * @param kb The knowledge base.
     * @param s A logical sentence.
     */
    void forwardChain(KB kb , vector<Sentence> s);
    /**
     * @brief This function is used in itself by the query mechanism in order to infer whether a certain course of action is valid of production following the rules.
     * 
     * @param kb The knowledge base
     * @param query A question in the form of a logical sentence
     * @return true If the proposed query is valid.
     * @return false If the proposed query bears logical invalidity.
     */
    bool backwardChain(KB kb , vector<Sentence> query);
    /**
     * @brief This function is used to train the agent (by altering the knowledge base) based on different given hypothesis.
     * 
     * @param examples A set of hypothesis.
     * @return The best possible hypothesis.
     */
    vector<Sentence> train(vector<vector<Sentence>> examples);
    /**
     * @brief Calculates the number of rules in a knowledge base.
     * 
     * @param kb The knowledge base.
     * @return int The calculated number of rules.
     */
    int nbRules(KB kb);
    /**
     * @brief Calculates the number of facts present in a knowledge base.
     * 
     * @param kn The knowledge base.
     * @return int The calculated number of facts.
     */
    int nbFacts(KB kn);
private: 
    vector<Sentence> facts; /**< A collection of the facts contained in the knowledge base.*/
    KBAnalyser analyser; /**< The First Order Logic analyser used by the knowledge base.*/
    CNF cnfclause; /**< A collection of facts expressed in their conjunctive normal form.*/
    vector<Rule> rules; /**< A collection of rules used by the inference engine */
};

#endif //_KB_H