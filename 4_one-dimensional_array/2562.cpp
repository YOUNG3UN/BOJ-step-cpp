#include<iostream>
using namespace std;
int main()
{
	int arr[9];

	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
	}

	int max = 0, n;
	for (int i = 0; i < 9; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			n = i+1;
		}
	}

	cout << max << endl;
	cout << n;

	return 0;
}