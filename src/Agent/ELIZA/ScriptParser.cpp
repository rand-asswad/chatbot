#include <fstream>
#include <regex>
#include "ScriptParser.h"

ScriptParser::ScriptParser(const string &sourcePath) : Parser(sourcePath) {
    this->initial = this->final = "";
    this->keys = vector<Key>();
    this->pre = this->post = Mapper();
    this->quit = vector<string>();
    this->thes = Thesaurus();

    this->parse();
}

string ScriptParser::pre_translate(string s ) {
    return "";
}

string ScriptParser::post_translate(string s ) {
    return "";
}

void ScriptParser::parse() {

    // Parse script file
    ifstream scriptFile(this->sourcePath);
    string line;
    regex expr;
    smatch match;

    while (getline(scriptFile, line)) {
        expr.assign(regexPattern("initial"));
        if (regex_match(line, match, expr)) {
            cout << "matched: \"" << match[2] << "\"" << endl;
        }
    }
    scriptFile.close();
}

vector<string> ScriptParser::splitStr(string str, char delimiter) {
    return vector<string>();
}

void ScriptParser::stripExtraWhiteSpace() {

}

string ScriptParser::regexPattern(string key) {
    string p = "^(\s*)" + key + "(.*)";
    return p;
}