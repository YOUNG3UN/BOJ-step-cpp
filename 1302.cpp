#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	map<string, int> m;		// key: 책제목, value: 팔린 책 수

	while (n--)
	{
		string book;
		cin >> book;
		m[book]++;
	}

	int cnt = 0;
	for (auto num : m)
	{
		cnt = max(cnt, num.second);	// 팔린 책 수 최대값
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