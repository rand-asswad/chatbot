#include <iostream>
#include "../../Agent/ELIZA/Eliza.h"
//#include "../../Agent/KnowledgeBase/KBAgent.h"

using namespace std;

int chooseAgent();

int main() {
    // I/O streams
    istream* inputStream = &cin;
    ostream* outputStream = &cout;

    // Initialize chatbot
    int bot = chooseAgent();
    string srcPath = "src/Agent/";
    if (bot==1) {
        srcPath += "ELIZA/scripts/original";
        Eliza agent = Eliza(inputStream, outputStream, srcPath);
    } else {
        //KBAgent agent = KBAgent(kb);
    }

    // Run Chatbot
    //agent.run();

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