#include "Eliza.h"

Eliza::Eliza(istream *input, ostream *output, string sourcePath) : Agent(input, output){
    this->script = new ScriptParser(sourcePath);
    this->memory = Memory();
}

string Eliza::processInput(string input) {
    return input;
}

vector<Key> Eliza::findKeys(string input) {
    return vector<Key>();
}

void Eliza::processScript() {

}
