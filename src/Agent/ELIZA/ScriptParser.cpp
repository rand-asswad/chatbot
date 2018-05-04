#include <fstream>
#include <regex>
#include "ScriptParser.h"

ScriptParser::ScriptParser(const String &sourcePath) : Parser(sourcePath) {
    this->initial = this->final = "";
    this->keys = vector<Key*>();
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
    String pattern;
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
                this->thes.push_back(new Synonyms(match.split()));
                break;
            case 6: // key
                currKey = this->newKey(match);
                //cout << *currKey << endl;
                break;
            case 7: // decomp
                currDecomp = currKey->newDecomp(match, thes);
                //cout << "\t" << *currDecomp << endl;
                break;
            case 8: // reasmb
                currDecomp->newReasmb(match);
                //cout << "\t\t" << currDecomp->reassemb.back() << endl;
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
    os << parser.thes;
    for (auto &key : parser.keys) {
        os << *key << endl;
        for (auto &dc : key->decomp) {
            os << "\t" << *dc << endl;
            for (auto &rsb : dc->reassemb) os << "\t\t" << *rsb << endl;
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

Key* ScriptParser::getKey(String word) {
    for (auto &key : this->keys) {
        if (key->name==word) return key;
    }
    return nullptr;
}

Key* ScriptParser::newKey(String scriptLine) {
    vector<String> words = scriptLine.split();
    auto key = new Key(words.at(0), int(words.at(1)));
    this->keys.push_back(key);
    return key;
}
