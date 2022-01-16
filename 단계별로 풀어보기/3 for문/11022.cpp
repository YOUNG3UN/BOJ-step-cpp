#include<iostream>
using namespace std;
int main()
{
	int A, B, T;

	cin >> T;

	for (int i = 1; i <= T; i++)
	{
		cin >> A >> B;
		cout << "Case #" << i << ": ";
		cout << A << " + " << B << " = ";
		cout << A + B << endl;
	}

	return 0;
}