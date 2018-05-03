#ifndef CHATBOT_STRING_H
#define CHATBOT_STRING_H

#include <iostream>
#include <vector>
using namespace std;

class String : public string {
public:
    // cb::String vs std::string
    using string::string; // inherit all constructors
    String(const string&); // construct String from std::string
    //cb::String& operator=(const string&); // assignment from std::string

    operator int() const; // String to int

    // pythonic methods
    vector<String> split();
    vector<String> split(char);

    void lower();
    void replaceStr(const String &src, const String &dst);
};

String join(vector<String> words, String delimiter = " ");

#endif //CHATBOT_STRING_H
