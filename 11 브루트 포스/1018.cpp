#include <iostream>
#include <algorithm>
using namespace std;

char board[51][51];

char W[8][8] =
	{
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W'
	};
char B[8][8] =
	{
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B'
	};

int Wcnt(int x, int y)		// W로 시작하는 체스판과 비교
{
	int cnt = 0;

	for (int i = x; i < x + 8; i++)
		for (int j = y; j < y + 8; j++)
			if (board[i][j] != W[i-x][j-y])
				cnt++;
	
	return cnt;
}

int Bcnt(int x, int y)		// B로 시작하는 체스판과 비교
{
	int cnt = 0;

	for (int i = x; i < x + 8; i++)
		for (int j = y; j < y + 8; j++)
			if (board[i][j] != B[i-x][j-y])
				cnt++;

	return cnt;
}

int main()
{
	int n, m;
	int result = 987654321;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> board[i][j];

	for (int i = 0; i < n - 7; i++)
		for (int j = 0; j < m - 7; j++)
				result = min(result, min(Wcnt(i, j), Bcnt(i, j)));

	cout << result;
	return 0;
}