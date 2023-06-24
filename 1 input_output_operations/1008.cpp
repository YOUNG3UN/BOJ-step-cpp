#include<iostream>
using namespace std;
int main()
{
    //1. 상대오차가 10^-9 이하 -> 소수점을 9자리수 이상 받을 수 있는 데이터타입 지정
    //float은 소수점 이하 6자리까지, double은 소수점 이하 15자리까지
    double A, B;
    cin >> A >> B;

    //2. 소수점 고정
    cout << fixed;  //소수점 아래부터 유효숫자 세기
    cout.precision(9);  //유효숫자 표기
    cout << A / B;

    return 0;
}