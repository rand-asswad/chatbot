#include "Key.h"


string Key::decompose(string s ) {
    return "";
}

Key::Key(const string &name, int rank) : name(name), rank(rank) {
    this->decomp = vector<Decomp>();
}
