#include "Eliza.h"

Eliza::Eliza(istream* in, ostream* out, string scriptPath) : Agent(in, out) {
    this->name = "Eliza";
    this->script = ScriptParser(scriptPath);
}

string Eliza::processInput(string input) {
    return input;
}

vector<Key> Eliza::findKeys(string input) {
    return vector<Key>();
}

void Eliza::processScript() {

}