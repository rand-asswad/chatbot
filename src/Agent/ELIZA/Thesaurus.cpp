#include "Thesaurus.h"

Synonyms* Thesaurus::findSynonyms(String word) {
    for (auto syn : *this) if (syn->hasWord(word)) return syn;
    return new Synonyms(word);
}

ostream &operator<<(ostream &os, const Thesaurus &thesaurus) {
    for (auto &syn : thesaurus) os << *syn << endl;
    return os;
}
