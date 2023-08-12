#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    string s, s_reverse;

    cin >> s;
    s_reverse = s;

    reverse(s_reverse.begin(), s_reverse.end());

    if (s == s_reverse)
        cout << 1;
    else
        cout << 0;

    return 0;
}