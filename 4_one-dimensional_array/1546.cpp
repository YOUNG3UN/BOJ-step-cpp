#include<iostream>
#include<vector>

using namespace std;

int main() {
    int N;
    double avg, sum = 0, max_num = 0;
    vector<double> v;

    cin >> N;

    for (int i = 0; i < N; i++) {
        double num;
        cin >> num;
        v.push_back(num);
        max_num = max(max_num, num);
    }

    for (int i = 0; i < N; i++) {
        v[i] = v[i] / max_num * 100;
        sum += v[i];
    }

    avg = sum / N;

    cout << avg;

    return 0;
}