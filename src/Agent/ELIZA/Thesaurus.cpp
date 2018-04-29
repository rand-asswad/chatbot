#include "Thesaurus.h"

Synonyms Thesaurus::findSynonyms(string word) {
    for (Synonyms syn : *this) if (syn.hasWord(word)) return syn;
    return Synonyms(word);
}