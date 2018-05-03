#ifndef CHATBOT_REASMB_H
#define CHATBOT_REASMB_H


#include <ostream>
#include "../../utils/String.h"
#include "Decomp.h"

class Decomp;

class Reasmb : public String{
public:
    Decomp* decomp;
    String rule;

    Reasmb(Decomp *decomp, const String &rule);

    friend ostream &operator<<(ostream &os, const Reasmb &reasmb);
};


#endif //CHATBOT_REASMB_H
