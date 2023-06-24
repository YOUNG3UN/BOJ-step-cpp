#include<iostream>

using namespace std;

int main() {
    int A, B, C, hour, min;

    cin >> A >> B >> C;

    hour = C / 60;
    min = C % 60;

    A += hour;
    B += min;

    if (B > 59) {
        A++;
        B -= 60;
    }

    if (A > 23) {
        A -= 24;
    }

    cout << A << ' ' << B;
    return 0;
}