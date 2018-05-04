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
/*
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
    return join(output);*/
    return processSentence(input);
}

vector<Key*> Eliza::collectKeys(String input) {
    vector<Key*> keys = vector<Key*>();
    vector<String> words = input.split();
    Key* k_ptr = nullptr;
    vector<Key*>::iterator it;
    for (String w : words) {
        k_ptr = this->script->getKey(w);
        if (k_ptr!= nullptr) {
            it = keys.begin();
            while ((it != keys.end()) && ((*it)->rank > k_ptr->rank)) it++;
            keys.insert(it, k_ptr);
        }
    }
    return keys;
}

String Eliza::processSentence(String input) {
    cout << "***processing \"" << input << "\"***" << endl;

    // pre-translate input
    cout << "***pretranslating***" << endl;
    String str = this->script->pre_translate(input);
    cout << "***processing \"" << str << "\"***" << endl;

    // collect keywords
    vector<Key*> keys = this->collectKeys(str);
    cout << "***collected keywords (in ranked order):***" << endl;
    for (auto &key : keys) cout << "\t" << *key << "\n";

    // find decomposition rule for keywords
    Decomp* decomp;
    String output;
    for (auto &key : keys) {
        decomp = key->findDecomp(str);
        if (decomp!=nullptr) {
            cout << "\t" << *decomp << endl;
            output = this->decomposeOnKey(decomp, str);
            if (!output.empty()) return output;
        }
    }

    cout << "***decomposition/reassembly failed***" << endl;
    // no output
    auto reasmb = memory.pop();
    cout << "***memory poped***\n\t" << *reasmb << endl;
    if (bool(reasmb)) {
        cout << "***trying replies from memory***" << endl;
        cout << "\t" << *reasmb << endl;
        decomp = reasmb->decomp;
        output = this->decomposeOnKey(decomp, str);
        if (!output.empty()) return output;
    }

    cout << "***nothing in memory, try key \"xnone\"***" << endl;

    // no memory
    decomp = this->script->getKey("xnone")->findDecomp(str);
    return this->decomposeOnKey(decomp, str);
}

String Eliza::decomposeOnKey(Decomp *decomp, String input) {
    // decompose sentence
    cout << "***decomposing on keyword \"" << decomp->key->name
         << "\" on decomposition rule \"" << decomp->pattern << "\"***" << endl;
    auto matches = decomp->decompose(input);

    cout << "***decomposition matches:" << endl;
    for (auto &m : matches) cout << "\t\"" << m << "\"" << endl;

    // get assembly rule
    auto reasmb = decomp->nextRule();
    cout << "***reassembling on rule \"" << reasmb->rule << "\"***" << endl;

    // goto another reassembly rule
    auto words = reasmb->rule.split();
    if (words.at(0)=="goto") {
        decomp = this->script->getKey(words.at(1))->findDecomp(input);
        matches = decomp->decompose(input);
        reasmb = decomp->nextRule();
        cout << "***redirecting to keyword \"" << decomp->key->name << "\"***" << endl;
    }

    // save in memory
    if (decomp->mem) memory.save(reasmb);

    return reasmb->reassemble(matches);
}
