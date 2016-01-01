#include<iostream>

void show(double * scores, int n)
{
	using namespace std;

	cout << "the scores are: " << endl;
	for (int i = 0; i < n; i++)
		cout << scores[i] << " ";
	cout << endl;
}
