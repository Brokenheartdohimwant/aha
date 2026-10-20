#include <iostream>
using namespace std;

struct Student {
    int id;
    int chinese;
    int math;
    int english;
    int total;
};

bool comesBefore(const Student& a, const Student& b) {
    if (a.total != b.total) return a.total > b.total;
    if (a.chinese != b.chinese) return a.chinese > b.chinese;
    return a.id < b.id;
}

int main() {
    int n;
    cin >> n;

    Student students[300];

    for (int i = 0; i < n; ++i) {
        students[i].id = i + 1;
        cin >> students[i].chinese
            >> students[i].math
            >> students[i].english;
        students[i].total = students[i].chinese
                          + students[i].math
                          + students[i].english;
    }

    // 冒泡排序：手写比较与交换，不使用 vector 和 sort。
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (!comesBefore(students[j], students[j + 1])) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; ++i) {
        cout << students[i].id << ' ' << students[i].total << '\n';
    }

    return 0;
}
