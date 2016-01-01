#include<iostream>
#include<cstring>

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	const int arsize = 10;
	char fname[arsize];
	char lname[arsize];
	char fullname[20];
	cout << "Enter your first name: ";
	cin.getline(fname, arsize);
	cout << "Enter your last name: ";
	cin.getline(lname, arsize);
	strcpy(fullname, fname);
	strcat(fullname, ", ");
	strcat(fullname, lname);
	cout << "Here's the information in a single string: " << fullname;
	cout << endl;
	return 0;
}
