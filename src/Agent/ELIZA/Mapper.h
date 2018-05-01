#ifndef _MAPPER_H
#define _MAPPER_H

#include <iostream>
#include <map>
#include "../../utils/String.h"

using namespace std;

class Mapper: public map<String, String> {
public: 
    
    Mapper() = default;
    void map(String src, String dst);
    
    String translate(String str);
    class AssociationClass1 {
    };
};

#endif //_MAPPER_H