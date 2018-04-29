#include "Synonyms.h"

Synonyms::Synonyms(const vector<string> &__x) : vector(__x) {}

bool Synonyms::hasWord(string word) {
    for (string w: *this) if (w.compare(word)) return true;
    return false;
}

Synonyms::Synonyms(const string word) : vector<string>(){
    this->push_back(word);
}

