#include <vector>
#include "Mapper.h"
#include "Script.h"
#include "../../utils.h"


void Mapper::map(String src, String dst) {
    this->insert(pair<String, String>(src, dst));
}

String Mapper::translate(String str) {
    vector<String> words = str.split();
    String output;
    for (String w : words) {
        if (this->count(w)) output += (*this)[w] + " ";
        else output += w + " ";
    }
    output = output.substr(0, output.length()-1);
    return output;
}
