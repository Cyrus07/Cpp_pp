#include<iostream>
#include<string>

using std::string;
struct car
{
	string manufacturer;
	int year;
};

int main()
{
	using std::string;
	using std::cout;
	using std::cin;
	using std::endl;

	int n;
	
	cout << "How many cars do you wish to catalog? ";
	cin >> n;
	car *p = new car [n];
	for (int i=0; i<n; i++)
	{
		cout << "Car #" << (i+1) << ":\n";
		cout << "Please enter the make:";
		cin.get();
		getline(cin, (p+i)->manufacturer);
		cout << "Please enter the year made: ";
		cin >> (p+i)->year;
	}
	cout << "Here is your collection:\n";
	for (int i =0; i<n; i++)
		cout << (p+i)->year << " " << (p+i)->manufacturer << endl;
	return 0;
}
