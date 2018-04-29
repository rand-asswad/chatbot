#ifndef _MAPPER_H
#define _MAPPER_H

#include <iostream>
#include <map>

using namespace std;

class Mapper: public map<string, string> {
public: 
    
    Mapper() = default;
    void map(string src, string dst);
    
    string translate(string str);
    class AssociationClass1 {
    };
};

#endif //_MAPPER_H