#include<iostream>

int main()
{
	using std::cout;
	using std::endl;

	double Daphne=100.0, Cleo=100.0;
	int i=0;
	
	while (Cleo <= Daphne)
	{
		i++;
		Cleo*=1.05;
		Daphne+=10;
	}
	cout << "Daphne: " << Daphne << endl
		<< "Cleo: " << Cleo << endl
		<< "It's year " << i << endl;
	return 0;
}
