#include<iostream>

double * fill_array(double ar[], int limit)
{
	using namespace std;
	double temp;
	double * ar_end = ar;
	for (int i = 0; i< limit; i++)
	{
		cout << "Enter value #" << (i+1) << ": ";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated. \n";
			break;
		}
		else if (temp < 0)
			break;
		*ar_end = temp;
		ar_end++;
	}
	return ar_end;
}
