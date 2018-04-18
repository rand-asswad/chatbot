#include "Agent.h"

using namespace std;

Agent::Agent(istream* input, ostream* output) {
    this->inputStream = input;
    this->outputStream = output;
}

void Agent::run() {
    *(this->outputStream) << "Hello, I'm " << this->name;
    *(this->outputStream) << ". How can I help you today?" << endl;
    string userInput;
    do {
        *(this->outputStream) << ">>> ";
        getline(*(this->inputStream), userInput);
        *(this->outputStream) << this->processInput(userInput) << endl;
    } while (userInput != "END.");
}
