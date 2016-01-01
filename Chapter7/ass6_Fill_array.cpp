#include<iostream>

int Fill_array(double * arr, int n)
{
	using namespace std;
	int m = 0;
	while((m < n) && cin)
	{
		cout << "Enter a double: ";
		cin >> arr[m];
		m++;
	}
	return m;
}
