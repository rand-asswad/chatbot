#ifndef CHATBOT_CHATBOT_H
#define CHATBOT_CHATBOT_H

#include <iostream>
#include <vector>
using namespace std;

namespace cb {
    class String;

    namespace Agent {
        class Agent;
        class Parser;

        class Eliza;
        class ScriptParser;
        class Key;
        class Decomp;
        class Mapper;
        class Thesaurus;
        class Synonyms;
        class Memory;
    }

    namespace Client {
        class Client;
        class TerminalClient;
        class GUIclient;
        class WebClient;
    }
}

#endif //CHATBOT_CHATBOT_H
