#include <regex>
#include "String.h"

String::String(const string &str) : basic_string(str){}

String::operator int() const {return stoi(*this);}

vector<String> String::split() {
    vector<String> words = vector<String>();
    size_t pos = 0, end = 0;
    while (end < this->length()) {
        while (isspace(this->at(pos))) pos++; //find next nonspace char
        end = pos;
        while ((end<length())&&(!isspace(this->at(end)))) end++; // find next space
        if (end > pos) {
            if (end >= this->length()) end = this->length();
            words.push_back(this->substr(pos, end - pos));
        }
        pos = end + 1;
        if (pos >= this->length()) break;
    }
    return words;
}

vector<String> String::split(char delimiter) {
    vector<String> words = vector<String>();
    size_t pos = 0, end = 0;
    while (end < this->length()) {
        while (delimiter==this->at(pos)) pos++; //find next nonspace char
        end = pos;
        while ((end<length())&&(delimiter!=this->at(end))) end++; // find next space
        if (end > pos) {
            if (end >= this->length()) end = this->length();
            words.push_back(this->substr(pos, end - pos));
        }
        pos = end + 1;
        if (pos >= this->length()) break;
    }
    return words;
}


String join(vector<String> words, char delimiter) {
    String joined;
    for (String w: words) {
        joined += w;
        joined.append(1, delimiter);
    }
    return joined.substr(0, joined.length() - 1);
}
