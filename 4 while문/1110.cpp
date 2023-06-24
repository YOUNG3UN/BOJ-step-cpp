#include<iostream>
using namespace std;
int main()
{
	int N, ans = 0;

	cin >> N;

	int temp;
	temp = N;

	while (1)
	{
		temp = (temp % 10) * 10 + (((temp / 10) + (temp % 10)) % 10);
		ans++;
		if (temp == N) break;
	}

	cout << ans;

	return 0;
}