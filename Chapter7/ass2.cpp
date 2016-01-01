#include<iostream>
#include"ass2.h"

int main()
{
	using namespace std;
	double scores[score_Num] = {};

	int n = fill(scores);
	show(scores, n);
	cout << "The average is " << avg(scores, n) << endl;
	return 0;
}
