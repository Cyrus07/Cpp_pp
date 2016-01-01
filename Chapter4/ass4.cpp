#include<iostream>
#include<string>

int main()
{
	using std::string;
	using std::cout;
	using std::cin;
	using std::endl;

	string fname;
	string lname;
	string fullname;
	cout << "Enter your first name: ";
	getline(cin, fname);
	cout << "Enter your last name: ";
	getline(cin, lname);
	fullname = fname + ", " + lname;
	cout << "Here's the information in a single string: " << fullname;
	cout << endl;
	
	return 0;
}
