#include<iostream>
using namespace std;
int main()
{
	int A, B, T;

	cin >> T;

	ios_base::sync_with_stdio(false);	// C, C++ ����ȭ ����
	cin.tie(NULL);						// �Է°� ����� �и�

	for (int i = 0; i < T; i++)
	{
		cin >> A >> B;
		cout << A + B << "\n";			// endl ��� \n ����
	}

	return 0;
}