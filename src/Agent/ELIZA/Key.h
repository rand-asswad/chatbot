#ifndef _KEY_H
#define _KEY_H

#include "Decomp.h"

#include <iostream>
#include <vector>
using namespace std;

class Decomp;

class Key {
public:
    /// Unique key name (identifier)
    String name;

    /// Key rank
    int rank;

    /// List of decomposition rules for keyword
    vector<Decomp*> decomp;

    /// Default constructor
    Key(const String &name, int rank);

    /**
     * Creates new decomposition object, adds it to Key.decomp and links it with the parent Key object.
     * @param scriptLine output string from Script::extractPattern
     * @param thesaurus Script.thes
     * @return pointer to created Decomp
     */
    Decomp* newDecomp(String scriptLine, Thesaurus thesaurus);

    /**
     * Finds matching decomposition rule for a given string on a keyword using REGEX.
     * @param str Raw string
     * @return pointer to matching Decomp, or nullptr if no match was found for Key object.
     */
    Decomp* findDecomp(String str);

    friend ostream &operator<<(ostream &os, const Key &key);
};

#endif //_KEY_H