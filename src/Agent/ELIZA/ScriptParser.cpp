#include <fstream>
#include <regex>
#include "ScriptParser.h"
#include "../../utils.h"

ScriptParser::ScriptParser(const String &sourcePath) : Parser(sourcePath) {
    this->initial = this->final = "";
    this->keys = vector<Key>();
    this->pre = this->post = Mapper();
    this->quit = vector<String>();
    this->thes = Thesaurus();

    this->parse();
}

String ScriptParser::pre_translate(String str) {
    return this->pre.translate(str);
}

String ScriptParser::post_translate(String str) {
    return this->post.translate(str);
}

void ScriptParser::parse() {
    // keys
    const String key[] = {"initial", "final", "quit", "pre", "post", "synon", "key", "decomp", "reasmb"};

    // Parse script file
    ifstream scriptFile(this->sourcePath);
    String line;
    size_t k;

    vector<String> word;
    Key* currKey = nullptr;
    Decomp* currDecomp = nullptr;

    String match;
    while (getline(scriptFile, line)) {
        for (k = 0; k < 9; k++) {
            match = extractPattern(line, key[k]);
            if (!match.empty()) break;
        }

        switch (k) {
            case 0: // initial
               this->initial = match;
                break;
            case 1: // final
                this->final = match;
                break;
            case 2: // quit
                this->quit.push_back(match);
                break;
            case 3: // pre
                word = match.split();
                this->pre.map(word.at(0), word.at(1));
                word.clear();
                break;
            case 4: // post
                word = match.split();
                this->post.map(word.at(0), word.at(1));
                word.clear();
                break;
            case 5: // synon
                this->thes.push_back(Synonyms(match.split()));
                break;
            case 6: // key
                word = match.split();
                currKey = new Key(word.at(0), stoi(word.at(1)));
                this->keys.push_back((*currKey));
                currKey = &(this->keys.back());
                break;
            case 7: // decomp
                currDecomp = new Decomp(match, false);
                if (currKey== nullptr) {
                    // raise error
                    cout << "ERROR: No associated key for decomposition" << endl;
                } else {
                    currKey->decomp.push_back((*currDecomp));
                    currDecomp = &(currKey->decomp.back());
                }
                break;
            case 8: // reasmb
                if (currDecomp== nullptr) {
                    // raise error
                    cout << "ERROR: No associated decomposition for reassemble rule" << endl;
                } else {
                    currDecomp->reassemb.push_back(match);
                }
                break;
            default: break;
        }
    }
    scriptFile.close();
}

ostream &operator<<(ostream &os, const ScriptParser &parser) {
    os << "<initial: \"" << parser.initial << "\">" << endl;
    os << "<final: \"" << parser.final << "\">" << endl;
    for (String q : parser.quit) os << "<quit: \"" << q << "\">" << endl;
    for (auto pair : parser.pre) os << "<pre: (" << pair.first << ", " << pair.second << ")>" << endl;
    for (auto pair : parser.post) os << "<post: (" << pair.first << ", " << pair.second << ")>" << endl;
    for (auto syn : parser.thes) {
        os << "<synon: (";
        for (size_t i=0; i<syn.size()-1; i++) os << syn[i] << ", ";
        os << syn.back() << ")>" << endl;
    }
    for (Key key : parser.keys) {
        os << "<key: name=\"" << key.name << "\", rank=" << key.rank;
        os << ", decomps=" << key.decomp.size() << ">" << endl;
        for (Decomp dc : key.decomp) {
            os << "<decomp: key=\"" << key.name << "\", pattern=\"" << dc.pattern << "\">" << endl;
            for (String rsb : dc.reassemb) {
                os << "<reasmb: decomp=\"" << dc.pattern << "\", pattern=\"" << rsb << "\">" << endl;
            }
        }
    }
    return os;
}

String ScriptParser::extractPattern(String line, String key) {
    String expression = key + ":";
    String result;
    size_t pos = line.find(expression);
    if (pos!=String::npos) {
        pos += expression.length();
        result = line.substr(pos, line.length());
        while (isspace(result.front())) result.erase(result.begin());
    }
    return result;
}

Key* ScriptParser::findKey(String word) {
    for (size_t i=0; i<this->keys.size(); i++) {
        if (this->keys.at(i).name==word) return &(this->keys[i]);
    }
    return nullptr;
}
