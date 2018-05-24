#ifndef CHATBOT_STRING_H
#define CHATBOT_STRING_H

#include <iostream>
#include <vector>
using namespace std;


/**
 * @brief An extended string class with useful methods.
 */
class String : public string {
public:
    // cb::String vs std::string
    using string::string; // inherit all constructors
    String(const string&); // construct String from std::string
    //cb::String& operator=(const string&); // assignment from std::string

    operator int() const; // String to int

    // pythonic methods
    /// Splits string by whitespace into a vector of strings
    vector<String> split();
    /// Splits string by a given character into a vector of strings
    vector<String> split(char);

    /// Turns string into lowercase
    void lower();

    /**
     * Replaces all instances of a string into another
     * @param src string to be replaced
     * @param dst string to replace src
     */
    void replaceStr(const String &src, const String &dst);
};

/**
 * Joins a vector of strings into one string
 * @param words vector of strings
 * @param delimiter separator string (default: space character)
 * @return joined string
 */
String join(vector<String> words, String delimiter = " ");

#endif //CHATBOT_STRING_H
