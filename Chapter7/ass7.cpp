#include<iostream>

const int Max = 5;
double * fill_array(double ar[], int limit);
void show_array(double ar[], double * prop_end);
void revalue(double r, double ar[], double * prop_end);

int main()
{
	using namespace std;
	double properties[Max];

	double * prop_end = fill_array(properties, Max);
	show_array(properties, prop_end);
	if (prop_end > properties)
	{
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin >> factor))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; Please enter a number: ";
		}
		revalue(factor, properties, prop_end);
		show_array(properties, prop_end);
	}
	cout << "Done.\n";
	cin.get();
	cin.get();
	return 0;
}
