/**
 * Project ChatBot
 */


#include "KB.h"

/**
 * KB implementation
 */


/**
 * @param kb 
 * @param s
 */
void KB::tell(KB kb , vector<Sentence> s) {

}

/**
 * @param kb 
 * @param s
 * @return vector<Sentence>
 */
vector<Sentence> KB::ask(KB kb , vector<Sentence> s) {
    return null;
}

/**
 * @param kb 
 * @param s
 * @return Boolean
 */
Boolean KB::entails(KB kb , vector<Sentence> s) {
    return null;
}

/**
 * @param kb 
 * @param s
 */
void KB::forwardChain(KB kb , vector<Sentence> s) {

}

/**
 * @param kb 
 * @param query
 * @return Boolean
 */
Boolean KB::backwardChain(KB kb , vector<Sentence> query) {
    return null;
}

/**
 * @param examples
 * @return vector<Sentence>
 */
vector<Sentence> KB::train(vector<vector<Sentence>> examples) {
    return null;
}

/**
 * @param kb
 * @return int
 */
int KB::nbRules(KB kb) {
    return 0;
}

/**
 * @param kn
 * @return int
 */
int KB::nbFacts(KB kn) {
    return 0;
}