// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "vector.h"

int Max_step(int *, int);
int Min_step(int *, int);
double Average_step(int *, int);

int main()
{
	using namespace std;
	using VECTOR::Vector;
	std::ofstream fout;
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	int N;
	cout << "Enter test numbers: ";
	cin >> N;
	cout << "Enter target distance (q to quit): ";
	cin >> target;
	cout << "Enter step length: ";
	cin >> dstep;
	int * step_rec = new int [N];
	for (int i = 0; i < N; i++)
	{
		result.reset(0.0, 0.0);
		steps = 0;
		while (result.magval() < target)
		{
			fout << steps << ": (x, y) = (" << result.xval() << ", " << result.yval() << ")\n";
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}
		*(step_rec+i) = steps;
	}
	cout << "Maximum step: " << Max_step(step_rec, N) << endl
		<< "Minimum step: " << Min_step(step_rec, N) <<endl
		<< "Average step: " << Average_step(step_rec, N) << endl;
	cout << "Bye!\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;
	return 0;
}

int Max_step(int * p, int n)
{
	int temp = *p;
	for (int i = 1; i < n; i++)
		temp = temp>*(p+i)?temp:*(p+i);
	return temp;
}

int Min_step(int * p, int n)
{
	int temp = *p;
	for (int i = 1; i < n; i++)
		temp = temp<*(p+i)?temp:*(p+i);
	return temp;
}

double Average_step(int * p, int n)
{
	int temp = 0;
	for (int i = 0; i < n; i++)
		temp += *(p+i);
	return 1.0 * temp / n;
}
