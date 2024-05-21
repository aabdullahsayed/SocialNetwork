#include <iostream>
#include <set>
#include "Trie.h"

using namespace std;

class InterestManagement {
private:
    Trie trie;

public:
    void addInterest(const string& interest) {
        trie.insert(interest);
    }

    void removeInterest(const string& interest) {
        trie.remove(interest);
    }

    set<string> listAllInterests() {
        return trie.getAllWords();
    }
};
