#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int L, n;
	cin >> L;
	vector<int> S;

	for (int i = 0; i < L; i++)
	{
		int num;
		cin >> num;
		S.push_back(num);
	}
	S.push_back(0);					// L이 1일 경우

	cin >> n;
	bool b = true;

	sort(S.begin(), S.end());

	int start, end;
	for (int i = 0; i < L + 1; i++)
	{
		if (n == S[i]) b = false;
		else if (n < S[i])
		{
			end = S[i] - 1;
			start = S[i - 1] + 1;				
			break;
		}
	}

	if (b) cout << (n - start) * (end - n + 1) + (end - n);
	else cout << 0;

	return 0;
}