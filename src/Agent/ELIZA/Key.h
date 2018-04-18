/**
 * Project ChatBot
 */


#ifndef _KEY_H
#define _KEY_H

#include "../../CppContainers/vector.h"


class Key: public vector {
public: 
    String name;
    Integer rank;
    vector<Decomp> decomp;
    
    /**
     * @param s 
     * @param i 
     * @param j
     */
    void Key(String s , Integer i , Integer j );
private: 
    
    /**
     * @param s
     */
    String decompose(String s );
};

#endif //_KEY_H