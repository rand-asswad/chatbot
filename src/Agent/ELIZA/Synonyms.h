/**
 * Project ChatBot
 */


#ifndef _SYNONYMS_H
#define _SYNONYMS_H

#include "../../CppContainers/vector.h"


class Synonyms: private vector {
public: 
    
    /**
     * @param word
     */
    Boolean hasWord(String word);
};

#endif //_SYNONYMS_H