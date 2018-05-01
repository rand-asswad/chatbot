#include <iostream>
#include <regex>
#include "../../Agent/ELIZA/Eliza.h"
//#include "../../Agent/KnowledgeBase/KBAgent.h"

using namespace std;

int chooseAgent();

int main() {
    // I/O streams
    istream* inputStream = &cin;
    ostream* outputStream = &cout;

    // Initialize chatbot
    int bot = 1;//chooseAgent();
    String srcPath = "src/Agent/";
    if (bot==1) {
        srcPath += "ELIZA/scripts/original";
        Eliza agent = Eliza(inputStream, outputStream, srcPath);
        cout << *(agent.script) << endl;
        //agent.run();
    } else {
        //KBAgent agent = KBAgent(kb);
    }

    // Run Chatbot
    //agent.run();
/*
    String decomp = "* i remember *";
    vector<String> words = split(decomp);
    String pattern = "";

    for (size_t i=0; i<words.size(); i++) {
        if (words[i]=="*") {
            if (i+1==words.size()) pattern += R"((.*))";
            else if (i>0) pattern += R"(((?:\s(?:\S+\s)*?)+?))";
            else pattern += R"((\S+ )*?)";
        } else {
            pattern += words[i];
            if ((i<words.size()-1)&&(words[i+1]!="*")) pattern += R"( )";
        }
    }

    String input = "yes i remember him";
    regex expr(pattern);

    for (String w:words) cout << w << "-";
    cout << endl;
    cout << pattern << endl;
    cout << regex_match(input, expr) << endl;
    */

    return EXIT_SUCCESS;
}

int chooseAgent() {
    int choice;
    cout << "Which doctor would you like to talk to?" << endl;
    cout << "1. Doctor Eliza" << endl;
    cout << "2. Doctor Mahmoud" << endl;
    cin >> choice;
    while ((choice > 2)||(choice < 1)) {
        cout << "Please enter 1 or 2: ";
        cin >> choice;
    }
    return choice;
}