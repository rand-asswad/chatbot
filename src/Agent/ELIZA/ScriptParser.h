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
    string initial;
    string final;
    Mapper pre;
    Mapper post;
    vector<Key> keys;
    vector<string> quit;
    Thesaurus thes;

    ScriptParser(const string &sourcePath);

    string pre_translate(string);
    string post_translate(string);

    friend ostream &operator<<(ostream &os, const ScriptParser &parser);

    Key* findKey(string word);
private:
    void parse();
    string extractPattern(string line, string key);
};

#endif //_SCRIPTPARSER_H