#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;

	int ans = 0;
	// 2진수 표현에서 1의 개수
	
	while (x > 0)
	{
		if (x % 2 == 1)	ans++;
		x /= 2;
	}

	cout << ans;

	return 0;
}