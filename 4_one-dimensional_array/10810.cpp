#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int N, M, i, j, k;

    cin >> N >> M;

    vector<int> ans(N, 0);

    for (int a = 0; a < M; a++) {
        cin >> i >> j >> k;
        fill(ans.begin() + i - 1, ans.begin() + j, k);
        /*
        for (; i <= j; i++)
        {
            ans[i - 1] = k;
        }
         */
    }

    for (int a = 0; a < N; a++) {
        cout << ans[a] << " ";
    }

    return 0;
}