#include<iostream>
using namespace std;
int main()
{
	int C;
	cin >> C;

	int arr[1000];

	while (C--)
	{
		int N;
		cin >> N;
		for (int i = 0; i < N; i++)
		{
			cin >> arr[i];
		}
		
		int sum = 0, avg;
		for (int i = 0; i < N; i++)
		{
			sum += arr[i];
		}
		avg = sum / N;

		double ans = 0;
		for (int i = 0; i < N; i++)
		{
			if (arr[i] > avg) ans++;
		}
		ans = ans / (double)N * 100;

		cout << fixed;
		cout.precision(3);
		cout << ans << "%" << endl;
	}

	return 0;
}