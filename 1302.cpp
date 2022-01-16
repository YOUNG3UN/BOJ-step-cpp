#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	map<string, int> m;		// key: å����, value: �ȸ� å ��

	while (n--)
	{
		string book;
		cin >> book;
		m[book]++;
	}

	int cnt = 0;
	for (auto num : m)
	{
		cnt = max(cnt, num.second);	// �ȸ� å �� �ִ밪
	}

	for (auto num : m)
	{
		if (cnt == num.second)
		{
			cout << num.first;
			break;
		}
	}

	return 0;
}