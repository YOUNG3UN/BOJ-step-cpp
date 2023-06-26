#include<iostream>
#include<vector>

using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> ans;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        if (num < X)
            ans.push_back(num);
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}