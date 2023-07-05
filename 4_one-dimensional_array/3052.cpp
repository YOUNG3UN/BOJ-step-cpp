#include<iostream>
#include<vector>

using namespace std;

int main() {

    int ans = 0;
    vector<int> remainder(42, 0);

    for (int i = 0; i < 10; i++) {
        int num;
        cin >> num;
        remainder[num % 42]++;
    }

    for (int i = 0; i < 42; i++) {
        if (remainder[i] > 0)
            ans++;
    }

    cout << ans;

    return 0;
}