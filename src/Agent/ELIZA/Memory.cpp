#include "Memory.h"

void Memory::save(Reasmb* rule) {
    if (this->size() < this->max) this->push_back(rule);
}

Reasmb* Memory::pop() {
    if (this->size()>0) {
        cout << "***memory size=" << this->size() << "***\n";
        auto first = this->at(0);
        cout << "***memory.pop() = " << *first << endl;
        this->erase(this->begin());
        return first;
    }
    cout << "***empty memory***" << endl;
    return nullptr;
}
