#ifndef CHATBOT_REASMB_H
#define CHATBOT_REASMB_H


#include <ostream>
#include "../../utils/String.h"
#include "Decomp.h"

class Decomp;

/**
 * @brief Reassembly rule for decomposed sentence.
 */
class Reasmb {
public:
    /// Pointer to parent decomposition rule
    Decomp* decomp;

    /// Reassembly rule pattern
    String rule;

    Reasmb(Decomp *decomp, const String &rule);

    /**
     * Reassembles sentence from matching expressions.
     * @param matches output of Decomp::decompose
     * @return reassembled response
     */
    String reassemble(vector<String> matches);

    friend ostream &operator<<(ostream &os, const Reasmb &reasmb);
};


#endif //CHATBOT_REASMB_H
