#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;

	int ans = 0;
	for (int i = 0; i < s.length(); i++)
	{
		ans++;
		if (s[i] == 'c')
		{
			if (s[i + 1] == '=' || s[i + 1] == '-')
				ans--;
		}
		else if (s[i] == 'd')
		{
			if (s[i + 1] == 'z' && s[i + 2] == '=')
				ans --;
			else if (s[i + 1] == '-')
				ans--;
		}
		else if (s[i] == 'l' || s[i] == 'n')
		{
			if (s[i + 1] == 'j')
				ans--;
		}
		else if (s[i] == 's' || s[i] == 'z')
		{
			if (s[i + 1] == '=')
				ans--;
		}
	}
	cout << ans;

	return 0;
}