#include "KB.h"
void KB::tell(KB kb , vector<Sentence> s) {

}

vector<Sentence> KB::ask(KB kb , vector<Sentence> s) {
    return vector<Sentence>();
}

bool KB::entails(KB kb , vector<Sentence> s) {
    return NULL;
}

void KB::forwardChain(KB kb , vector<Sentence> s) {

}

bool KB::backwardChain(KB kb , vector<Sentence> query) {
    return NULL;
}

vector<Sentence> KB::train(vector<vector<Sentence>> examples) {
    return vector<Sentence>();
}

int KB::nbRules(KB kb) {
    return 0;
}

int KB::nbFacts(KB kn) {
    return 0;
}