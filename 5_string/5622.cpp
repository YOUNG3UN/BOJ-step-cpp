#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int ans = 0;

    int num[] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};
    for (int i = 0; i < s.length(); i++)
        ans += num[s[i] - 'A'];

    cout << ans;

    return 0;

    /*
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A' || s[i] == 'B' || s[i] == 'C')
            ans += 3;
        else if (s[i] == 'D' || s[i] == 'E' || s[i] == 'F')
            ans += 4;
        else if (s[i] == 'G' || s[i] == 'H' || s[i] == 'I')
            ans += 5;
        else if (s[i] == 'J' || s[i] == 'K' || s[i] == 'L')
            ans += 6;
        else if (s[i] == 'M' || s[i] == 'N' || s[i] == 'O')
            ans += 7;
        else if (s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S')
            ans += 8;
        else if (s[i] == 'T' || s[i] == 'U' || s[i] == 'V')
            ans += 9;
        else if (s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z')
            ans += 10;
    }

    cout << ans;

    return 0;
    */
}