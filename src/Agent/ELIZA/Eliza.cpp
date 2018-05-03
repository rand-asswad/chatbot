#include <algorithm>
#include "Eliza.h"
#include "../../utils.h"

Eliza::Eliza(istream *input, ostream *output, String sourcePath) : Agent(input, output){
    this->script = new ScriptParser(sourcePath);
    this->memory = Memory();
}

String Eliza::greetUser() {
    return this->script->initial;
}

String Eliza::processInput(String input) {
    input.lower();
    for (String q : this->script->quit) {
        this->quit = (input==q);
        if (quit) return this->script->final;
    }

    // split sentences into a vector
    String delimiters = ",?!";
    String temp = replaceChars(input, delimiters, '.');
    vector<String> sentences = temp.split('.');

    // process each sentence separately
    vector<String> output = vector<String>();
    for (String s : sentences) {
        output.push_back(processSentence(s));
    }

    // return full response.
    return join(output);
}

vector<Key*> Eliza::collectKeys(String input) {
    vector<Key*> keys = vector<Key*>();
    vector<String> words = input.split();
    Key* k_ptr = nullptr;
    vector<Key*>::iterator it;
    for (String w : words) {
        k_ptr = this->script->findKey(w);
        if (k_ptr!= nullptr) {
            it = keys.begin();
            while ((it != keys.end()) && ((*it)->rank > k_ptr->rank)) it++;
            keys.insert(it, k_ptr);
        }
    }
    return keys;
}

String Eliza::processSentence(String input) {
    // pre-translate input
    String output = this->script->pre_translate(input);

    // collect keywords
    vector<Key*> keys = this->collectKeys(output);

    // generate reply from keywords


    return output;
}

void Eliza::processScript() {

}
