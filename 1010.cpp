#include <iostream>
using namespace std;

int main()
{
	int tc, n, m;

	cin >> tc;
	while (tc--)
	{
		long long ans = 1;
		cin >> n >> m;
		for (int i = 1; i <= n; i++)
			ans = ans * (m - i + 1) / i;
		cout << ans << endl;
	}
}

/* 
n개의 연속된 자연수에는 항상 n의 배수가 있다.
n*(n-1)/1은 2로 나누어 떨어진다.
n*(n-1)*(n-2)은 3으로 나누어 떨어진다.
*/