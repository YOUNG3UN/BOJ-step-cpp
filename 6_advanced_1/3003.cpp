#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> white = {1, 1, 2, 2, 2, 8};

    for (int i = 0; i < white.size(); i++) {
        int num;
        cin >> num;
        cout << white[i] - num << ' ';
    }

    return 0;
}