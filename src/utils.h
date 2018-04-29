#ifndef CHATBOT_UTILS_H
#define CHATBOT_UTILS_H

#include <iostream>
#include <vector>

using namespace std;

vector<string> split(string str);
vector<string> split(string str, char delimiter);
string join(vector<string> words, char delimiter = ' ');
string replaceChars(string str, string src, char dst);

#endif //CHATBOT_UTILS_H
