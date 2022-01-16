#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

	int n, sum = 0;
	cin >> n;

	vector<int> A;
	vector<int> B;

	int num;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		A.push_back(num);
	}
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		B.push_back(num);
	}
	
	sort(A.begin(), A.end());
	sort(B.begin(), B.end(), greater<int>());

	for (int i = 0; i < n; i++)
	{
		sum += A[i] * B[i];
	}

	cout << sum;

	return 0;
}