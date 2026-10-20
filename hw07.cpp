#include <iostream>
#include <string>
using namespace std;

void moveOne(char command, int& x, int& y) {
    if (command == 'U') {
        ++y;
    } else if (command == 'D') {
        --y;
    } else if (command == 'L') {
        --x;
    } else if (command == 'R') {
        ++x;
    }
}

int main() {
    string commands;
    cin >> commands;

    int x = 0;
    int y = 0;

    for (char command : commands) {
        moveOne(command, x, y);
    }

    if (x == 0 && y == 0) {
        cout << "true\n";
    } else {
        cout << "false\n";
    }

    return 0;
}
