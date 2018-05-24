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
    /// Initial string to greet user
    String initial;
    /// Final string to bid farewell to user
    String final;
    /// Pre-processing map database
    Mapper pre;
    /// Post-processing map database
    Mapper post;
    /// List of keywords in database
    vector<Key*> keys;
    /// List of strings that the user can enter to end the conversation
    vector<String> quit;
    /// Thesaurus (list of synonyms) in database
    Thesaurus thes;

    Script(const String &sourcePath);

    /**
     * Pre-translates input string
     * @param input user's raw input
     * @return processed input
     */
    String pre_translate(String str);

    /**
     * Post-translates output string
     * @param output raw output string
     * @return processed output
     */
    String post_translate(String str);

    friend ostream &operator<<(ostream &os, const Script &parser);

    /**
     * Finds keyword in database
     * @param word given word
     * @return associated Key object
     */
    Key* getKey(String word);
private:
    void parse() override;
    String extractPattern(String line, String key);
    Key* newKey(String scriptLine);
};

#endif //_SCRIPTPARSER_H