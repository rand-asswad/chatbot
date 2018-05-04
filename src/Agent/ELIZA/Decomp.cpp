#include <random>
#include <regex>
#include "Decomp.h"


Reasmb* Decomp::nextRule() {
    default_random_engine gen_rand;
    uniform_int_distribution<size_t> distribution(0, this->reassemb.size()-1);
    /*
    if (this->mem) {
        this->reassembRule = distribution(gen_rand);
    } else {
        if (!this->reassembRule) this->reassembRule = distribution(gen_rand);
        this->reassembRule++;
        if (this->reassembRule == this->reassemb.size()) this->reassembRule = 0;
    }*/
    if (this->reassembRule!=-1) {
        auto old = this->reassembRule;
        while (this->reassembRule==old) {
            this->reassembRule = distribution(gen_rand);
        }
    } else this->reassembRule = distribution(gen_rand);

    return this->reassemb.at(this->reassembRule);
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
            words.at(i).replaceStr(words.at(i), thes.findSynonyms(words.at(i))->asRegex());
        }
    }

    this->pattern = join(words); // join words
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

vector<String> Decomp::decompose(String str) {
    vector<String> decomp = vector<String>();
    regex expr(this->pattern);
    smatch m;
    regex_search(str, m, expr);
    for (size_t i=0; i<m.size(); i++) decomp.push_back(m.str(i));
    return decomp;
}
