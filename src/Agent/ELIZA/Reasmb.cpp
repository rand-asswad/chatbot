#include "Reasmb.h"

Reasmb::Reasmb(Decomp *decomp, const String &rule) : decomp(decomp), rule(rule) {}

ostream &operator<<(ostream &os, const Reasmb &reasmb) {
    os << "<reasmb: rule=\"" << reasmb.rule << "\", decomp: \""
       << reasmb.decomp->pattern << "\">";
    return os;
}

