#include<iostream>
#include"ass2.h"

int fill(double * scores)
{
	using namespace std;
	int n = 0;
	double temp;

	cout << "Enter at most 10 scores, q to quit: " << endl;
	while (cin >> temp)
	{
		scores[n] = temp;
		n++;
	}
	return n;
}
