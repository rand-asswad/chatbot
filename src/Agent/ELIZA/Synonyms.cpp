#include "Synonyms.h"

Synonyms::Synonyms(const vector<String> &__x) : vector(__x) {}

bool Synonyms::hasWord(String word) {
    for (auto &w: *this) if (w==word) return true;
    return false;
}

Synonyms::Synonyms(const String word) : vector<String>(){
    this->push_back(word);
}

String Synonyms::asRegex() {
    return "(" + join(*this, "|") + ")";
}

ostream &operator<<(ostream &os, const Synonyms &synonyms) {
    os << "<synon: (";
    for (size_t i=0; i<synonyms.size(); i++) os << synonyms.at(i) << ", ";
    os << synonyms.back() << ")>";
    return os;
}

