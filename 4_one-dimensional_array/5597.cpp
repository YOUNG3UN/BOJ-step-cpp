#include<iostream>
#include<vector>

using namespace std;

int main() {
    int N, M, i, j;

    cin >> N >> M;

    vector<int> ans;

    for (int a = 1; a <= N; a++) {
        ans.push_back(a);
    }

    for (int a = 0; a < M; a++) {
        cin >> i >> j;
        swap(ans[i - 1], ans[j - 1]);
    }

    for (int a = 0; a < N; a++) {
        cout << ans[a] << " ";
    }

    return 0;
}