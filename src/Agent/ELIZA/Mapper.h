#ifndef _MAPPER_H
#define _MAPPER_H

#include <iostream>
#include <map>
#include "../../utils/String.h"

using namespace std;

/**
 * @brief Hash table for pre/post script elements.
 */
class Mapper: public map<String, String> {
public:
    Mapper() = default;

    /**
     * Adds a new element to hash table.
     * @param src key
     * @param dst value
     */
    void map(String src, String dst);

    /**
     * Translates keywords in a sentence into their values from the hash table.
     * @param sentence string of words
     * @return Translated sentence
     */
    String translate(String sentence);
};

#endif //_MAPPER_H