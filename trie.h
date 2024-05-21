#ifndef TRIE_H
#define TRIE_H

#include <iostream>
#include <unordered_map>
#include <set>

using namespace std;

class TrieNode {
public:
    unordered_map<char, TrieNode*> children;
    bool isEndOfWord;

    TrieNode() : isEndOfWord(false) {}
};

class Trie {
private:
    TrieNode* root;

    void getAllWordsHelper(TrieNode* node, string prefix, set<string>& words) {
        if (node->isEndOfWord) {
            words.insert(prefix);
        }
        for (auto& pair : node->children) {
            getAllWordsHelper(pair.second, prefix + pair.first, words);
        }
    }

public:
    Trie() {
        root = new TrieNode();
    }

    void insert(const string& word) {
        TrieNode* node = root;
        for (char c : word) {
            if (node->children.find(c) == node->children.end()) {
                node->children[c] = new TrieNode();
            }
            node = node->children[c];
        }
        node->isEndOfWord = true;
    }

    void remove(const string& word) {
        // Removal function implementation
    }

    set<string> getAllWords() {
        set<string> words;
        getAllWordsHelper(root, "", words);
        return words;
    }
};

#endif
