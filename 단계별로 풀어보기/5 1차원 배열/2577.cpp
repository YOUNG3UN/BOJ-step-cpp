#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int arr[10];
	int num = a * b * c;

	for (int i = 0; i < 10; i++)
	{
		arr[i] = 0;
	}

	while(num != 0)
	{
		arr[num % 10]++;
		num /= 10;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}


	return 0;
}