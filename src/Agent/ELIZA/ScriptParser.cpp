#include "ScriptParser.h"

ScriptParser::ScriptParser(const string &sourcePath) : Parser(sourcePath) {
    this->initial = this->final = "";
    this->keys = vector<Key>();
    this->pre = this->post = Mapper();
    this->quit = vector<string>();
    this->thes = Thesaurus();
}

string ScriptParser::pre_translate(string s ) {
    return "";
}

string ScriptParser::post_translate(string s ) {
    return "";
}

void ScriptParser::parse() {

}

vector<string> ScriptParser::splitStr(string str, char delimiter) {
    return vector<string>();
}

void ScriptParser::stripExtraWhiteSpace() {

}
