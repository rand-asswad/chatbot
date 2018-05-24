#ifndef _SYNONYMS_H
#define _SYNONYMS_H

#include <iostream>
#include <vector>
#include "../../utils/String.h"

using namespace std;

/// @brief List of synonyms
class Synonyms: public vector<String> {
public:
    /// Default constructor: creates an empty list and adds @param word into the list.
    Synonyms(const String word);
    /// Constructor: creates list from a vector of words
    Synonyms(const vector<String> &__x);

    /**
     * Translates synonyms list into a REGEX group expression.
     * @return words list separated by "|"
     */
    String asRegex();

    /**
     * Searches for a word in synonyms list.
     * @param word
     * @return True if word in list, False otherwise
     */
    bool hasWord(String word);

    friend ostream &operator<<(ostream &os, const Synonyms &synonyms);
};

#endif //_SYNONYMS_H