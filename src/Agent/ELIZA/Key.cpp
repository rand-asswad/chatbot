#include "Key.h"

String Key::decompose(String s ) {
    return "";
}

Key::Key(const String &name, int rank) : name(name), rank(rank) {
    this->decomp = vector<Decomp*>();
}

ostream &operator<<(ostream &os, const Key &key) {
    os << "<key: name=\"" << key.name << "\", rank=" << key.rank
       << ", decomps=" << key.decomp.size() << ">";
    return os;
}

Decomp* Key::newDecomp(String scriptLine, Thesaurus thesaurus) {
    Decomp* newdecomp = new Decomp(this, move(scriptLine), move(thesaurus));
    this->decomp.push_back(newdecomp);
    return newdecomp;
}
