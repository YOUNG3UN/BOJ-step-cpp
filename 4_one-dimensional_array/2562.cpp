#include<iostream>
using namespace std;
int main()
{
    int num, max_num=0, order;

	for (int i = 0; i < 9; i++)
	{
		cin >> num;
        max_num = max(num, max_num);
        if(num == max_num)
            order = i+1;
	}

    cout << max_num << "\n" << order;

	return 0;
}