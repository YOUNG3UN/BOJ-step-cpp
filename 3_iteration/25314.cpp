#include<iostream>

using namespace std;

int main() {
    int N;

    cin >> N;

    do {
        cout << "long ";
    } while (N -= 4);

    cout << "int";

    return 0;
}