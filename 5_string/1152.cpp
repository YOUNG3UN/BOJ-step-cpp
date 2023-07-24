#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);    // 띄어쓰기가 포함된 문자열을 받을 때는 getline

    int ans = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ')
            ans++;
    }

    if (s[0] == ' ')
        ans--;

    if (s[s.length() - 1] == ' ')
        ans--;

    cout << ans;

    return 0;
}