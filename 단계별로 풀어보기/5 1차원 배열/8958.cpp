#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int T;
	cin >> T;

	char arr[80];

	while (T--)
	{
		cin >> arr;
		int ans = 0, temp = 0;
		for (int i = 0; i < strlen(arr); i++)
		{
			if (arr[i] == 'O')
			{
				temp++;
				ans += temp;
			}
			else temp = 0;
		}
		cout << ans << endl;
	}

	return 0;
}