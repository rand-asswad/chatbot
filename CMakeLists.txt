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
        src/Agent/ELIZA/Script.cpp
        src/Agent/ELIZA/Script.h
        src/Agent/ELIZA/Synonyms.cpp
        src/Agent/ELIZA/Synonyms.h
        src/Agent/ELIZA/Thesaurus.cpp
        src/Agent/ELIZA/Thesaurus.h
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
        src/Client/Client.h
        src/utils/String.cpp
        src/utils/String.h
        src/Agent/ELIZA/Reasmb.cpp
        src/Agent/ELIZA/Reasmb.h
)
