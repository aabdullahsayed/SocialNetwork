#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <unordered_map>
#include <set>

using namespace std;

class Graph {
private:
    unordered_map<string, set<string>> adjList;

public:
    void addEdge(const string& user1, const string& user2) {
        adjList[user1].insert(user2);
        adjList[user2].insert(user1);
    }

    void removeEdge(const string& user1, const string& user2) {
        adjList[user1].erase(user2);
        adjList[user2].erase(user1);
    }

    set<string> getAdjacentVertices(const string& username) {
        return adjList[username];
    }
};

#endif
