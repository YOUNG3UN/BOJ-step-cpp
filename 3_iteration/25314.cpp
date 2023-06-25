#include<iostream>

using namespace std;

int main() {
    int X, N, result = 0;

    cin >> X >> N;

    while (N--) {
        int price, count;
        cin >> price >> count;
        result += price * count;
    }

    if(result != X)
        cout << "No";
    else
        cout << "Yes";

    return 0;
}