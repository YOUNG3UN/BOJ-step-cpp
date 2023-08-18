#include <iostream>

using namespace std;

int main() {

    string s;
    int ans = 0;

    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '=' && s[i - 1] == 'z' && s[i - 2] == 'd')  //"dz="
            ans -= 2;
        else if ((s[i] == '=' || s[i] == '-' ||     //"c=", "s=", "z=", "c-", "d-"
                  s[i] == 'j' && (s[i - 1] == 'l' || s[i - 1] == 'n')))   //"lj", "nj"
            continue;

        ans++;
    }

    cout << ans;

    return 0;
}