#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
	int size, M;
	cin >> size >> M;

	deque<int> d;

	for (int i = 1; i <= size; i++)
	{
		d.push_back(i);
	}

	int find, idx, ans=0;

	while (M--)
	{
		cin >> find;
		for (int i = 0; i < d.size(); i++)
		{
			if (d[i] == find)
			{
				idx = i;
				break;
			}
		}
		// if (idx == 0) d.pop_front();
		if (d.size() / 2 >= idx)
		{
			while (find != d.front())
			{
				d.push_back(d.front());
				d.pop_front();
				ans++;
			}
		}
		else
		{
			while (find != d.front())
			{
				d.push_front(d.back());
				d.pop_back();
				ans++;
			}
		}
		d.pop_front();
	}

	cout << ans;
	
	return 0;
}