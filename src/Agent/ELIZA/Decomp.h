/**
 * Project ChatBot
 */


#ifndef _DECOMP_H
#define _DECOMP_H

#include "../../CppContainers/vector.h"


class Decomp: public vector {
public: 
    String pattern;
    Integer reassembRule;
    vector<String> reassemb;
    
    /**
     * @param p
     * @param m
     */
    void Decomp(String p, Boolean m);
private: 
    Boolean mem;
    
    String nextRule();
    
    /**
     * @param s
     */
    String assemble(String s );
};

#endif //_DECOMP_H