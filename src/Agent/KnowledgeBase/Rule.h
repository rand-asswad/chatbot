#ifndef _RULE_H
#define _RULE_H

#include "Sentence.h"
#include <vector>
#include <iostream>
using namespace std;
/**
 * @file Rule.h
 * @author Ergi, Rand, Yuge
 */

/**
 * @brief This class represents a rule.
 */
class Rule {
public: 
    vector<Sentence> sentences; /**< A rule is a collection of logical sentences.
};

#endif //_RULE_H