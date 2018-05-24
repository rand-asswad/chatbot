#include "TerminalClient.h"

int main(int argc, char* argv[]) {
    // I/O streams
    istream* inputStream = &cin;
    ostream* outputStream = &cout;

    // Initialize chatbot
    int bot = chooseAgent();
    Agent* agent;
    String srcPath = "src/Agent/";
    switch (bot) {
        case 1:
            srcPath += "ELIZA/scripts/original";
            agent = new Eliza(inputStream, outputStream, srcPath);
            break;
        case 2:
            //srcPath += "KnowledgeBase/db";
            //agent = new KBAgent(inputStream, outputStream, srcPath);
            //break;
        default:
            return EXIT_FAILURE;
    }

    // Run Chatbot, run(true) for debugging
    agent->run(true);


    return EXIT_SUCCESS;
}

int chooseAgent() {
    int choice;
    cout << "Which doctor would you like to talk to?" << endl;
    cout << "1. Doctor Eliza" << endl;
    cout << "2. Doctor Logic (unavailable)" << endl;
    cin >> choice;
    while ((choice > 2)||(choice < 1)) {
        cout << "Please enter 1 or 2: ";
        cin >> choice;
    }
    return choice;
}