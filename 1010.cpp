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
n���� ���ӵ� �ڿ������� �׻� n�� ����� �ִ�.
n*(n-1)/1�� 2�� ������ ��������.
n*(n-1)*(n-2)�� 3���� ������ ��������.
*/