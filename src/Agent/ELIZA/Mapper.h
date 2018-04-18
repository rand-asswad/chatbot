/**
 * Project ChatBot
 */


#ifndef _MAPPER_H
#define _MAPPER_H

#include "../../CppContainers/map.h"


class Mapper: public map {
public: 
    
    void Mapper();
    
    /**
     * @param src
     * @param dst
     */
    void map(String src, String dst);
    
    /**
     * @param str
     */
    String translate(String str);
    class AssociationClass1 {
    };
};

#endif //_MAPPER_H