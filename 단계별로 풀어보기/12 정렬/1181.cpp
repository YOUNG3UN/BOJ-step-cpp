#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string s1, string s2)
{
	if (s1.length() == s2.length())	// 길이가 같으면 사전순
		return s1 < s2;
	return s1.length() < s2.length();
}

int main()
{
	int n;
	vector<string> v;
	string word;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> word;
		v.push_back(word);
	}

	sort(v.begin(), v.end(), compare);

	cout << v[0] << endl;
	for (int i = 1; i < n; i++)
	{
		if (v[i-1] == v[i])	// 중복 제거
			continue;
		cout << v[i] << endl;
	}

}