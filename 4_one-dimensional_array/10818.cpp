#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> ans;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        ans.push_back(num);
    }

    sort(ans.begin(), ans.end());

    cout << ans.front() << " " << ans.back();

    return 0;
}