#include "Thesaurus.h"

Synonyms Thesaurus::findSynonyms(String word) {
    for (Synonyms syn : *this) if (syn.hasWord(word)) return syn;
    return Synonyms(word);
}