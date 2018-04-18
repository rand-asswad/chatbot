/**
 * Project ChatBot
 */


#ifndef _SCRIPTPARSER_H
#define _SCRIPTPARSER_H

#include "../Parser.h"


class ScriptParser: public Parser {
public: 
    String initial;
    String final;
    Mapper pre;
    Mapper post;
    vector<Key> keys;
    vector<String> quit;
    Thesaurus thes;
    
    /**
     * @param s
     */
    String pre_translate(String s );
    
    /**
     * @param s
     */
    String post_translate(String s );
private: 
    
    /**
     * @param sourcePath
     */
    void parse(String sourcePath );
    
    /**
     * @param str
     * @param delimiter
     */
    vector<String> splitStr(String str, char delimiter);
    
    void stripExtraWhiteSpace();
};

#endif //_SCRIPTPARSER_H