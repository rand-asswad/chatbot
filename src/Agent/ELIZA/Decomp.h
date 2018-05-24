#ifndef _DECOMP_H
#define _DECOMP_H

#include <iostream>
#include <vector>
#include "../../utils/String.h"
#include "Thesaurus.h"
#include "Key.h"
#include "Reasmb.h"

using namespace std;

class Key;
class Reasmb;

/**
 * @brief Decomposition rule for a sentence.
 */
class Decomp {
public:
    /// Decomposition REGEX pattern
    String pattern;

    /// List of reassembly rules for decomposition.
    vector<Reasmb*> reassemb;

    /// Pointer to parent Key
    Key* key;

    /**
     * Default constructor, translates script pattern (special format) into REGEX.
     * @param key parent Key
     * @param scriptLine output string from Script::extractPattern
     * @param thes Thesaurus object
     */
    Decomp(Key* key, String scriptLine, Thesaurus thes);

    /**
     * Creates new reassembly object, adds it to Decomp.reassemb and links it with the parent Decomp object.
     * @param reasmb reassembly rule pattern.
     */
    void newReasmb(String reasmb);

    /**
     * Decomposes a sentence according.
     * @param str input sentence
     * @return vector of matching expressions
     */
    vector<String> decompose(String str);

    friend ostream &operator<<(ostream &os, const Decomp &decomp);

    /// @return pointer to a random rassembly rule
    Reasmb* nextRule();

    /// save decomposition rule in memory ?
    bool mem;
private:
    /// current reassembly rule index in Decomp.reassemb, -1 if not assigned.
    size_t reassembRule = -1;
};

#endif //_DECOMP_H