#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    string S;

    while(T--){
        cin >> S;
        S.back()+S.begin();
    }

    cout << S.length();

    return 0;
}