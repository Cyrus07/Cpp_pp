#include<iostream>

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	double tax;
	int income;
	cout << "Enter the income: ";
	cin >> income;
	while (income >= 0 && cin)
	{
		if (income < 5000)
			tax = 0;
		else if (income < 15000)
			tax = income * 0.1;
		else if (income < 35000)
			tax = income * 0.15;
		else 
			tax = income * 0.2;
		cout << "the tax is " << tax << endl;
		cin >> income;
	}
	return 0;
}
