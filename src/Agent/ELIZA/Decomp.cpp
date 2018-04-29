#include <random>
#include "Decomp.h"


string Decomp::nextRule() {
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

string Decomp::assemble(string s ) {
    return "";
}

Decomp::Decomp(const string &pattern, bool mem) : pattern(pattern), mem(mem) {
    this->reassemb = vector<string>();
}
