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

void String::lower() {
    for (size_t i=0; i<this->length(); i++)
        if ((this->at(i)>='A')&&(this->at(i)<='Z'))
            this->at(i) -= ('A' - 'a');
}

void String::replaceStr(const String &src, const String &dst) {
    size_t pos = this->find(src);
    while (pos != npos) {
        this->replace(pos, src.length(), dst);
        pos += dst.length();
        pos = this->find(src, pos);
    }
}


String join(vector<String> words, String delimiter) {
    String joined;
    for (String w: words) joined += w + delimiter;
    return joined.substr(0, joined.length() - delimiter.length());
}
