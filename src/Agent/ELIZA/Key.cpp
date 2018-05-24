#include <regex>
#include "Key.h"

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

Decomp* Key::findDecomp(String str) {
    regex expr;
    for (auto &dp : decomp) {
        expr.assign(dp->pattern);
        if (regex_match(str, expr)) {
            return dp;
        }
    }
    return nullptr;
}
