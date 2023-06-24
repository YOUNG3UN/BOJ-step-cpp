#include<iostream>
using namespace std;
int main()
{
    //A+B+C의 값이 10¹² x 3일 경우 int의 범위를 초과하기 때문에 long long으로 변수를 선언
    long long A, B, C;
    cin >> A >> B >> C;
    cout << A + B + C;

    return 0;
}