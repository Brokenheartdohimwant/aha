#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[1000];
    long long sum = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i) {
        sum += a[i];
        if (i > 0) cout << ' ';
        cout << sum;
    }
    cout << '\n';

    return 0;
}
