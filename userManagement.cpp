
### Source Code Files

#### UserManagement.cpp

```cpp
#include <iostream>
#include <unordered_map>
#include "User.h"

using namespace std;

class UserManagement {
private:
    unordered_map<string, User> users;

public:
    void addUser(const string& username, const User& userDetails) {
        users[username] = userDetails;
    }

    void removeUser(const string& username) {
        users.erase(username);
    }

    void updateUserDetails(const string& username, const User& newDetails) {
        users[username] = newDetails;
    }

    User getUser(const string& username) {
        return users[username];
    }
};
