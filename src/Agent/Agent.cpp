#include "Agent.h"

using namespace std;

Agent::Agent(istream* input, ostream* output) {
    this->inputStream = input;
    this->outputStream = output;
}

void Agent::run() {
    string userInput;
    this->quit = false;
    *(this->outputStream) << this->greetUser() << endl;
    while (!quit) {
        *(this->outputStream) << "> ";
        getline(*(this->inputStream), userInput);
        *(this->outputStream) << this->processInput(userInput) << endl;
    }
}