#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    char c;
    int sum = 0;

    for (int i = 0; i < N; i++) {
        cin >> c;
        sum += c - 48;        // �ƽ�Ű�ڵ� '0'�� �� 48�� ��
    }

    cout << sum;

    return 0;
}