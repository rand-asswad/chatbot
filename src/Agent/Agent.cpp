#include "Agent.h"

using namespace std;

Agent::Agent(istream* input, ostream* output) {
    this->inputStream = input;
    this->outputStream = output;
    this->debugger = nullptr;
}

void Agent::run(bool debug) {
    this->debugger = (debug) ? (&cout) : nullptr;
    String userInput;
    this->quit = false;
    *(this->outputStream) << this->greetUser() << endl;
    while (!quit) {
        *(this->outputStream) << "> ";
        getline(*(this->inputStream), userInput);
        *(this->outputStream) << this->processInput(userInput) << endl;
    }
}