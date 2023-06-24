#include <iostream>
# define N 10001
using namespace std;

bool arr[N];

int solution(int n)
{
	int sum = n;
	while (1)
	{
		if (n == 0) break;
		sum += n % 10;		// ���� �ڸ� ���� ����
		n /= 10;			// �ڸ����� �ϳ� ����
	}

	return sum;
}

int main()
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = false;
	}

	for (int i = 1; i < N; i++)
	{
		arr[solution(i)] = true;
	}

	for (int i = 1; i < N; i++)
	{
		if (!arr[i]) cout << i << endl;
	}

	return 0;
}