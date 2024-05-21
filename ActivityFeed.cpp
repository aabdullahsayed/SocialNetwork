#include <iostream>
#include <queue>
#include <list>

using namespace std;

class ActivityFeed {
private:
    queue<string> feed;

public:
    void postActivity(const string& activity) {
        feed.push(activity);
    }

    list<string> retrieveRecentActivities() {
        list<string> activities;
        while (!feed.empty()) {
            activities.push_back(feed.front());
            feed.pop();
        }
        return activities;
    }
};
