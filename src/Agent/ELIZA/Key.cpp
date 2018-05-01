#include "Key.h"


String Key::decompose(String s ) {
    return "";
}

Key::Key(const String &name, int rank) : name(name), rank(rank) {
    this->decomp = vector<Decomp>();
}
