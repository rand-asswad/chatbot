/**
 * Project ChatBot
 */


#ifndef _THESAURUS_H
#define _THESAURUS_H

class Thesaurus {
public: 
    
    void Thesaurus();
    
    /**
     * @param word
     */
    Synonyms findSynonyms(String word);
};

#endif //_THESAURUS_H