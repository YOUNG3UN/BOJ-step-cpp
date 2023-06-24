#include<iostream>
using namespace std;
int main()
{
	int A, B, T;

	cin >> T;

	ios_base::sync_with_stdio(false);	// C, C++ 동기화 해제
	cin.tie(NULL);						// 입력과 출력을 분리

	for (int i = 0; i < T; i++)
	{
		cin >> A >> B;
		cout << A + B << "\n";			// endl 대신 \n 쓰기
	}

	return 0;
}