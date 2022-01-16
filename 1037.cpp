#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a;
	int x = 1000000, y = 2;
	int n;

	cin >> a;
	int* divisor = new int[a];

	for (int i = 0; i < a; i++)
		cin >> divisor[i];

	for (int i = 0; i < a; i++)
	{
		x = min(x, divisor[i]);
		y = max(y, divisor[i]);
	}

	n = x * y;
	cout << n;

	delete[] divisor;

	return 0;
}