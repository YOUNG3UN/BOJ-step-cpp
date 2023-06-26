#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int N, v;
    cin >> N;

    vector<int> A;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        A.push_back(num);
    }

    cin >> v;

    cout << count(A.begin(), A.end(), v);

    return 0;
}