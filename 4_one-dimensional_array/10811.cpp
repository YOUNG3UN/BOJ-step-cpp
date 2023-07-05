#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

    int N, M;
    vector<int> v;

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        v.push_back(i + 1);
    }

    for (int i = 0; i < M; i++) {
        int I, J;
        cin >> I >> J;
        reverse(v.begin() + I - 1, v.begin() + J);
    }

    for (int i = 0; i < N; i++) {
        cout << v[i] << ' ';
    }

    return 0;
}