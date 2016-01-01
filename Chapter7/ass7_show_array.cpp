#include<iostream>

void show_array(double ar[], double * ar_end)
{
	using namespace std;
	for (double * temp = ar; temp < ar_end; temp++)
	{
		cout << "Property #" << (temp-ar+1) << ": $";
		cout << *temp << endl;
	}
}
