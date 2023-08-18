#include <iostream>
#include <vector>

using namespace std;

int main() {

    int N, ans;

    cin >> N;
    ans = N;

    while (N--) {
        string s;
        vector<bool> alphabet(26, false);

        cin >> s;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == s[i - 1])
                continue;
            if (alphabet[s[i] - 97] == true){
                ans--;
                break;
            }
            alphabet[s[i] - 97] = true;
        }
    }

    cout << ans;

    return 0;
}