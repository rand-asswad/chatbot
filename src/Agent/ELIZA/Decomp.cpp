#include <random>
#include "Decomp.h"


Reasmb* Decomp::nextRule() {
    default_random_engine gen_rand;
    uniform_int_distribution<size_t> distribution(0, this->reassemb.size());
    if (this->mem) {
        this->reassembRule = distribution(gen_rand);
    } else {
        if (!this->reassembRule) this->reassembRule = distribution(gen_rand);
        this->reassembRule++;
        if (this->reassembRule == this->reassemb.size()) this->reassembRule = 0;
    }
    return this->reassemb.at(this->reassembRule);
}

String Decomp::assemble(String s ) {
    return "";
}


Decomp::Decomp(Key* key, String scriptLine, Thesaurus thes) {
    this->key = key;
    vector<String> words = scriptLine.split();

    // memory
    this->mem = (words.at(0)=="$");
    if (this->mem) words.erase(words.begin());

    // synonyms
    for (size_t i=0; i<words.size(); i++) {
        if (words.at(i).at(0) == '@') {
            words.at(i) = words.at(i).substr(1);
            words.at(i).replaceStr(words.at(i), thes.findSynonyms(words.at(i)).asRegex());
        }
    }

    this->pattern = join(words, R"((\s+))"); // join words
    this->pattern.replaceStr("*", "(.*)"); // wildcard to regex

    this->reassemb = vector<Reasmb*>();
}

void Decomp::newReasmb(String reasmb) {
    auto r = new Reasmb(this, reasmb);
    this->reassemb.push_back(r);
}

ostream &operator<<(ostream &os, const Decomp &decomp) {
    os << "<decomp: rule=\"" << decomp.pattern << "\", key=\"" << decomp.key->name << "\">";
    return os;
}
