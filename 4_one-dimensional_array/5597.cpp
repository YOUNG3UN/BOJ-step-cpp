#include<iostream>
#include<vector>

using namespace std;

int main() {

    vector<bool> student(30, false);

    for (int i = 0; i < 28; i++) {
        int num;
        cin >> num;
        student[num - 1] = true;
    }

    for (int i = 0; i < 30; i++) {
        if (student[i] == false)
            cout << i + 1 << '\n';
    }

    return 0;
}