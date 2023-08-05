#include <iostream>

using namespace std;

int main() {

    string s;

    while (1) {
        getline(cin, s);
        if (s == "")    //공백이 입력되면 종료
            break;
        cout << s << '\n';
    }


    return 0;
}