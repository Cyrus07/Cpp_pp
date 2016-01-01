#include<iostream>
#include<fstream>
#include<cstdlib>

int fileNameSize = 20;

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	using std::ifstream;

	char fileName[fileNameSize];
	ifstream inFile;
	cout << "Enter the file name: ";
	cin.getline(fileName, fileNameSize);
	inFile.open(fileName);

	if (!inFile.is_open())
	{
		cout << "Could not open the file " << fileName << endl;
		cout << "Program terminated." << endl;
		exit(EXIT_FAILURE);
	}
	int num_of_Char = 0;
	char ch;
	while (inFile.get(ch))
		num_of_Char++;
	
	cout << "The number of character in the file " << fileName 
		<< " is " << num_of_Char << endl;
	
	return 0;
}
