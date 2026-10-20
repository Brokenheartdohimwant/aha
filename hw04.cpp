#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int n = 5;
    int score;
    int sum = 0;
    int maxScore = -1;
    int minScore = 11;

    for (int i = 0; i < n; ++i) {
        cin >> score;
        sum += score;

        if (score > maxScore) maxScore = score;
        if (score < minScore) minScore = score;
    }

    double average = (sum - maxScore - minScore) / 3.0;
    cout << fixed << setprecision(2) << average << '\n';

    return 0;
}
