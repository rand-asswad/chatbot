#include "Synonyms.h"

Synonyms::Synonyms(const vector<String> &__x) : vector(__x) {}

bool Synonyms::hasWord(String word) {
    for (String w: *this) if (w.compare(word)) return true;
    return false;
}

Synonyms::Synonyms(const String word) : vector<String>(){
    this->push_back(word);
}

String Synonyms::asRegex() {
    return "(" + join(*this, "|") + ")";
}

