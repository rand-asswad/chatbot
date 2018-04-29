#include <algorithm>
#include "Eliza.h"
#include "../../utils.h"

Eliza::Eliza(istream *input, ostream *output, string sourcePath) : Agent(input, output){
    this->script = new ScriptParser(sourcePath);
    this->memory = Memory();
}

string Eliza::greetUser() {
    return this->script->initial;
}

string Eliza::processInput(string input) {
    for (string q : this->script->quit) {
        this->quit = (input==q);
        if (quit) return this->script->final;
    }

    // split sentences
    string delimiters = ",?!";
    string temp = replaceChars(input, delimiters, '.');
    vector<string> sentences = split(temp, '.');

    // process sentences separately
    vector<string> outputs = vector<string>();
    for (string s : sentences) {
        outputs.push_back(processSentence(s));
    }

    // regroup sentences
    string output;
    for (string out : outputs) {
        if (!out.empty()) output += out + " ";
    }
    output = output.substr(0, output.length() - 1);
    return output;
}

vector<Key> Eliza::findKeys(string input) {
    vector<Key> keys = vector<Key>();
    vector<string> words = split(input);
    Key* k_ptr = nullptr;
    for (string w : words) {
        k_ptr = this->script->findKey(w);
        if (k_ptr!= nullptr) keys.push_back((*k_ptr));
    }
    reverse(keys.begin(), keys.end());
    return keys;
}

string Eliza::processSentence(string input) {
    // pre-translate input
    string output = this->script->pre_translate(input);

    // collect keywords
    vector<Key> keys = this->findKeys(output);

    // generate reply from keyword


    return output;
}

void Eliza::processScript() {

}
