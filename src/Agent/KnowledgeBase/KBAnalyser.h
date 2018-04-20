#ifndef _KBANALYSER_H
#define _KBANALYSER_H

#include "Analyser.h"
#include "../Parser.h"


class KBAnalyser: public Analyser, public Parser {
public:
    KBAnalyser(const string &sourcePath);
};

#endif //_KBANALYSER_H