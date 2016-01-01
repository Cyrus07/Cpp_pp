#include<iostream>

void Show_array(double * arr, int n)
{
	using namespace std;
	cout << "The array is ";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}
