#include "Mapper.h"


Mapper::Mapper() {

}

void Mapper::map(string src, string dst) {
    this->insert(pair<string, string>(src, dst));
}

string Mapper::translate(string str) {
    return "";
}
