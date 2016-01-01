#include<iostream>

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	const char *month[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", 
							 "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
	int sale[3][12] = {0};
	int sum_year[3] = {0};
	int sum_total = 0;
	for (int i=0; i<3; i++)
	{
		cout << "Year " << (i+1) << ": " << endl;
		for (int j=0; j<12; j++)
		{
			cout << "Input the sale amount of " << month[j] << ": " << endl;
			cin >> sale[i][j];
			sum_year[i] += sale[i][j];
		}
		sum_total += sum_year[i];
	}
	cout << "The separate sale amount each year are: " 
		<< sum_year[0] << ", " << sum_year[1] << ", " << sum_year[2] 
		<< ".\n";
	cout << "The total sale amount of the three year is " 
		<< sum_total << ".\n" ;
	return 0;
}
