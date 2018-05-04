#include <regex>
#include "Reasmb.h"

Reasmb::Reasmb(Decomp *decomp, const String &rule) : decomp(decomp), rule(rule) {}

ostream &operator<<(ostream &os, const Reasmb &reasmb) {
    os << "<reasmb: rule=\"" << reasmb.rule << "\", decomp: \""
       << reasmb.decomp->pattern << "\">";
    return os;
}

String Reasmb::reassemble(vector<String> matches) {
    if (this->decomp->pattern == "*") return this->rule;

    String output = this->rule;
    regex expr(R"((.*)(\([0-9]+\))(.*))");
    smatch m;
    String group;
    int index;

    while (regex_match(output, m, expr)) {
        group = m[2].str(); // (#match)
        index = stoi(group.substr(1, group.length() - 2)); // #match
        if (index < matches.size()) output.replaceStr(group, matches[index]);
    }
    return output;
}

