#include<iostream>
#include<string>

struct Patrons
{
	std::string name;
	double amount;
};

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	int n;

	cout << "Enter the number of patrons: ";
	cin >> n;
	Patrons * ppt = new Patrons [n];

	cout << "Enter the name and amount of patrons." << endl;
	for (int i=0; i<n; i++)
	{
		cout << "Name of pathon #" << (i+1) << ": ";
		cin.get();
		getline(cin, (ppt+i)->name);
		cout << "Amount: ";
		cin >> (ppt+i)->amount;
	}

	cout << "Grand Patrons: " << endl;
	int gp = 0;
	for (int i=0; i<n; i++)
		if ((ppt+i)->amount >= 10000)
		{
			cout << "Name: " << (ppt+i)->name << "\t" 
				<< "Amount: " << (ppt+i)->amount << endl;
			gp++;
		}
	if (gp == 0)
		cout << "none" << endl;

	cout << "Patrons: " << endl;
	int p = 0;
	for (int i=0; i<n; i++)
		if ((ppt+i)->amount < 10000)
		{
			cout << "Name: " << (ppt+i)->name << "\t" 
				<< "Amount: " << (ppt+i)->amount << endl;
			p++;
		}
	if (p == 0)
		cout << "none" << endl;
	
	return 0;
}
