#include<iostream>

typedef double (*pfunc)(double, double);
double calculate(double x, double y, pfunc func);
double ass10_add(double x, double y);
double ass10_minus(double x, double y);
double ass10_multiply(double x, double y);

int main()
{
	using namespace std;
	double x, y;
	pfunc pf[3] = {ass10_add, ass10_minus, ass10_multiply};
	cout << "Enter two number (q to quit): " << endl;
	while (cin >> x && cin >> y)
	{
		cout << "Output\tAdd\tMinus\tMultiply" << endl;
		for (int i = 0; i < 3; i++)
			cout << "\t" << calculate(x, y, *pf[i]);
		cout << endl;
	}
	return 0;
}

double calculate(double x, double y, pfunc func)
{
	return (*func)(x, y);
}

double ass10_add(double x, double y)
{
	return x + y;
}

double ass10_minus(double x, double y)
{
	return x - y;
}

double ass10_multiply(double x, double y)
{
	return x * y;
}
