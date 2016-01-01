#include<iostream>
#include<string>

int main()
{
	using std::string;
	using std::cout;
	using std::cin;
	using std::endl;

	string month[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul",
						 "Aug", "Sep", "Oct", "Nov", "Dec"};
	int sale[12] = {0};
	int sum = 0;
	for (int i=0; i<12; i++)
	{
		cout << "Input the sale amount of " << month[i] << ": " << endl;
		cin >> sale[i];
		sum += sale[i];
	}
	cout << "The sale amount this year is " << sum << ".\n";
	return 0;
}
