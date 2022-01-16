#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int N;
	cin >> N;

	double* arr = new double[N];
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + N);
	double max = arr[N - 1];
	double sum = 0;

	for (int i = 0; i < N; i++)
	{
		arr[i] = arr[i] / max * 100;
		sum += arr[i];
	}

	double avg = sum / (double)N;

	cout << avg;

	delete[] arr;

	return 0;
}