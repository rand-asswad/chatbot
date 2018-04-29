#include <vector>
#include "Mapper.h"
#include "ScriptParser.h"
#include "../../utils.h"


void Mapper::map(string src, string dst) {
    this->insert(pair<string, string>(src, dst));
}

string Mapper::translate(string str) {
    vector<string> words = split(str);
    string output;
    for (string w : words) {
        if (this->count(w)) output += (*this)[w] + " ";
        else output += w + " ";
    }
    output = output.substr(0, output.length()-1);
    return output;
}
