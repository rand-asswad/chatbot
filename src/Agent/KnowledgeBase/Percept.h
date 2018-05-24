#ifndef _PERCEPT_H
#define _PERCEPT_H

#include "Sentence.h"
#include <vector>
#include <iostream>
using namespace std;
/**
 * @brief This class represents a perception received by the agent (which is of an exclusive text form in our case).
 * 
 * @file Percept.h
 * @author Ergi, Rand, yuge
 */
class Percept {
public: 
    int id; /**< Each percept bears a unique number.*/
    /**
     * @brief This function turns a percept into a logical sentence.
     * 
     * @param p The percepts to be converted.
     * @return A logical sentence.
     */
   vector<Sentence> makePerceptSentence(Percept p );
private: 
    String string_feed; /**< Represents the text form of a percept.*/
    vector<Sentence> logic_feed; /**< Represents the logical form of a percept.*/
};

#endif //_PERCEPT_H