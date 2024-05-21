#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <unordered_map>

using namespace std;

template<typename K, typename V>
class HashTable {
private:
    unordered_map<K, V> table;

public:
    void insert(const K& key, const V& value) {
        table[key] = value;
    }

    void remove(const K& key) {
        table.erase(key);
    }

    V get(const K& key) {
        return table[key];
    }

    bool contains(const K& key) {
        return table.find(key) != table.end();
    }
};

#endif
