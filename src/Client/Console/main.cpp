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
    Agent* agent;
    String srcPath = "src/Agent/";
    if (bot==1) {
        srcPath += "ELIZA/scripts/original";
        agent = new Eliza(inputStream, outputStream, srcPath);

    } else {
        //agent = new KBAgent(kb);
    }

    // Run Chatbot
    agent->run(true);


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