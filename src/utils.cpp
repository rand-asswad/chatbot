#include "utils.h"

vector<string> split(string str) {
    string sub;
    size_t pos = 0, end = 0;
    vector<string> result = vector<string>();
    while (end < str.length()) {
        while (isspace(str[pos])) pos++; // first nonspace char
        end = pos;
        while (!isspace(str[end])) end++; // find next space char
        if (end>pos) {
            end = (end > str.length()) ? str.length() : end;
            result.push_back(str.substr(pos, end-pos));
        }
        pos = end+1;
    }
    return result;
}

vector<string> split(string str, char delimiter) {
    string sub;
    size_t pos = 0, end = 0;
    vector<string> result = vector<string>();
    while (end < str.length()) {
        while (str[pos]==delimiter) pos++;
        end = pos;
        while (str[end]!=delimiter) end++;
        if (end>pos) {
            end = (end > str.length()) ? str.length() : end;
            result.push_back(str.substr(pos, end-pos));
        }
        pos = end+1;
    }
    return result;
}

string join(vector<string> words, char delimiter) {
    string joined;
    for (string w: words) {
        joined += w;
        joined.append(1, delimiter);
    }
    return joined.substr(0, joined.length() - 1);
}

string replaceChars(string str, string src, char dst) {
    for (char c : src) str.replace(str.begin(), str.end(), c, dst);
    return str;
}

