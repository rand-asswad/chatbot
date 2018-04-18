cmake_minimum_required(VERSION 3.9)
project(chatbot)

set(CMAKE_CXX_STANDARD 11)

add_executable(chatbot
        src/Agent/ELIZA/Decomp.cpp
        src/Agent/ELIZA/Decomp.h
        src/Agent/ELIZA/Eliza.cpp
        src/Agent/ELIZA/Eliza.h
        src/Agent/ELIZA/Key.cpp
        src/Agent/ELIZA/Key.h
        src/Agent/ELIZA/Mapper.cpp
        src/Agent/ELIZA/Mapper.h
        src/Agent/ELIZA/Memory.cpp
        src/Agent/ELIZA/Memory.h
        src/Agent/ELIZA/ScriptParser.cpp
        src/Agent/ELIZA/ScriptParser.h
        src/Agent/ELIZA/Synonyms.cpp
        src/Agent/ELIZA/Synonyms.h
        src/Agent/ELIZA/Thesaurus.cpp
        src/Agent/ELIZA/Thesaurus.h
        src/Agent/KnowledgeBase/Action.cpp
        src/Agent/KnowledgeBase/Action.h
        src/Agent/KnowledgeBase/Analyser.cpp
        src/Agent/KnowledgeBase/Analyser.h
        src/Agent/KnowledgeBase/FLAnalyser.cpp
        src/Agent/KnowledgeBase/FLAnalyser.h
        src/Agent/KnowledgeBase/KB.cpp
        src/Agent/KnowledgeBase/KB.h
        src/Agent/KnowledgeBase/KBAgent.cpp
        src/Agent/KnowledgeBase/KBAgent.h
        src/Agent/KnowledgeBase/KBAnalyser.cpp
        src/Agent/KnowledgeBase/KBAnalyser.h
        src/Agent/KnowledgeBase/Percept.cpp
        src/Agent/KnowledgeBase/Percept.h
        src/Agent/KnowledgeBase/Rule.cpp
        src/Agent/KnowledgeBase/Rule.h
        src/Agent/KnowledgeBase/Sentence.cpp
        src/Agent/KnowledgeBase/Sentence.h
        src/Agent/Agent.cpp
        src/Agent/Agent.h
        src/Agent/Parser.cpp
        src/Agent/Parser.h
        src/Client/Console/TerminalClient.cpp
        src/Client/Console/TerminalClient.h
        src/Client/GUI/GUIclient.cpp
        src/Client/GUI/GUIclient.h
        src/Client/Web/WebClient.cpp
        src/Client/Web/WebClient.h
        src/Client/Client.h src/Client/Console/main.cpp)
