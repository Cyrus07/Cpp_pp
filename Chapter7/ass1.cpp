#include<iostream>

double harm_avg(double, double);

int main()
{
	using namespace std;

	double x, y;
	cout << "Enter two numbers: " << endl
		<< "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
	while (x!=0 && y!=0 && (x+y)!=0)
	{
		cout << "The harmonic average is " << harm_avg(x, y) << endl
			<< "Enter two numbers: " << endl
			<< "x: ";
		cin >> x;
		cout << "y: ";
		cin >> y;
	}
	return 0;
}
