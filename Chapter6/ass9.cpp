#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>

struct Patrons
{
	std::string name;
	double amount;
};

const int fileNameSize = 20;

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	using std::ifstream;
	
	char fileName[fileNameSize];
	cout << "Enter the filename: ";
	cin.getline(fileName, fileNameSize);
	ifstream inFile;
	inFile.open(fileName);

	if (!inFile.is_open())
	{
		cout << "Could not open the file " << fileName << endl;
		cout << "Program terminated.\n";
		exit(EXIT_FAILURE);
	}

	int n;
	inFile >> n;
	Patrons * ppt = new Patrons [n];
	for (int i=0; i<n; i++)
	{
		inFile.get();
		getline(inFile, (ppt+i)->name);
		inFile >> (ppt+i)->amount;
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
