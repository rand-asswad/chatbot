#ifndef _SCRIPTPARSER_H
#define _SCRIPTPARSER_H

#include "../Parser.h"
#include "Mapper.h"
#include "Key.h"
#include "Thesaurus.h"

#include <iostream>
#include <vector>

using namespace std;

class ScriptParser: public Parser {
public: 
    String initial;
    String final;
    Mapper pre;
    Mapper post;
    vector<Key> keys;
    vector<String> quit;
    Thesaurus thes;

    ScriptParser(const String &sourcePath);

    String pre_translate(String);
    String post_translate(String);

    friend ostream &operator<<(ostream &os, const ScriptParser &parser);

    Key* findKey(String word);
private:
    void parse();
    String extractPattern(String line, String key);
};

#endif //_SCRIPTPARSER_H