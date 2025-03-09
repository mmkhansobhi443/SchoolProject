#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> names;
    string name;

    cout << "Enter names (enter 'done' when finished): ";
    while (true) {
        cin >> name;
        if (name == "done") {
            break;
        } else {
            names.push_back(name);
        }
    }

    cout << "You entered the following names: ";
    for (string name : names) {
        cout << name << ", ";
    }

    return 0;
}
