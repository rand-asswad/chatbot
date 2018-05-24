#ifndef _SCRIPTPARSER_H
#define _SCRIPTPARSER_H

#include "../Parser.h"
#include "Mapper.h"
#include "Key.h"
#include "Thesaurus.h"

#include <iostream>
#include <vector>

using namespace std;

class Key;

class Script: public Parser {
public: 
    String initial;
    String final;
    Mapper pre;
    Mapper post;
    vector<Key*> keys;
    vector<String> quit;
    Thesaurus thes;

    Script(const String &sourcePath);

    String pre_translate(String);
    String post_translate(String);

    friend ostream &operator<<(ostream &os, const Script &parser);

    Key* getKey(String word);
private:
    void parse();
    String extractPattern(String line, String key);

    Key* newKey(String scriptLine);
};

#endif //_SCRIPTPARSER_H