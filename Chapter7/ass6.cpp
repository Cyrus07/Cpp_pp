#include<iostream>
#include"ass6.h"

int main()
{
	using namespace std;
	int n;
	cout << "Enter array length: ";
	cin >> n;
	double *arr = new double [n];
	int m = Fill_array(arr, n);
	Show_array(arr, m);
	Reverse_array(arr, m);
	Show_array(arr, m);
	Reverse_array(arr+1, m-2);
	Show_array(arr, m);
	return 0;
}

