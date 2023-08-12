#include <iostream>
#include <vector>

using namespace std;

int main() {

    string s;
    vector<int> alphabet(26, 0);
    int max_idx, max_num = 0;

    cin >> s;

    for (char c: s) {
        if (c >= 97)
            alphabet[c - 97]++;
        else
            alphabet[c - 65]++;
    }

    for (int i = 0; i < 26; i++) {
        if (max_num < alphabet[i]) {
            max_num = alphabet[i];
            max_idx = i;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (max_idx != i && max_num == alphabet[i]) {
            cout << '?';
            return 0;
        }
    }

    cout << (char) (max_idx + 65);
    return 0;
}