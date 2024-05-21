#include <iostream>
#include <unordered_map>
#include <set>

using namespace std;

class Recommendations {
private:
    unordered_map<string, set<string>> interestToUsers;

public:
    void addUserToInterest(const string& interest, const string& username) {
        interestToUsers[interest].insert(username);
    }

    set<string> findUsersWithSimilarInterests(const string& interest) {
        return interestToUsers[interest];
    }

    set<string> suggestFriends(const string& username, const set<string>& interests) {
        set<string> suggestedFriends;
        for (const auto& interest : interests) {
            auto users = findUsersWithSimilarInterests(interest);
            users.erase(username);
            suggestedFriends.insert(users.begin(), users.end());
        }
        return suggestedFriends;
    }
};
