#include <iostream>
using namespace std;

int main() {
    int a[100];
    int n = 0;
    int x;

    while (cin >> x && x != 0) {
        a[n] = x;
        ++n;
    }

    for (int i = n - 1; i >= 0; --i) {
        if (i != n - 1) cout << ' ';
        cout << a[i];
    }
    cout << '\n';

    return 0;
}
