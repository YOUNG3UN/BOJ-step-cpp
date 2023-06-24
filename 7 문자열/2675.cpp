#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int R;
		cin >> R;

		char S[21];
		cin >> S;

		for (int i = 0; i < strlen(S); i++)
		{
			for(int j = 0; j < R; j++)
				cout << S[i];
		}
		cout << endl;
	}

	return 0;
}