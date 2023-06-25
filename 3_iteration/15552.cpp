#include<iostream>

using namespace std;

int main() {
    int A, B, T;

    cin >> T;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 0; i < T; i++) {
        cin >> A >> B;
        cout << A + B << "\n";
    }

    return 0;
}