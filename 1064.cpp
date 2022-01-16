#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

double length(double x1, double x2, double y1, double y2)
{
	return sqrt( pow((x1 - x2), 2)  + pow((y1 - y2) , 2) );
}

int main()
{

	double Ax, Ay, Bx, By, Cx, Cy;

	cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy;

	if ( (Ay - By) * (Bx - Cx) == (By - Cy) * (Ax - Bx))	cout << -1;
		// A-B의 기울기 = B-C의 기울기
		//(Ay - By) / (Ax - Bx) == (By - Cy) / (Bx - Cx)
		
	else
	{
		double minL, maxL;
		double l1, l2, l3;
		l1 = length(Ax, Bx, Ay, By) + length(Bx, Cx, By, Cy);	// A-B, B-C
		l2 = length(Ax, Bx, Ay, By) + length(Ax, Cx, Ay, Cy);	// A-B, A-C
		l3 = length(Ax, Cx, Ay, Cy) + length(Bx, Cx, By, Cy);	// A-C, B-C
		minL = min(min(l1, l2), l3) * 2;
		maxL = max(max(l1, l2), l3) * 2;

		cout << fixed;
		cout.precision(16);
		cout << maxL - minL;
	}

	return 0;
}