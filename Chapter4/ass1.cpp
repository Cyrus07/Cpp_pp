#include<iostream>

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	const int arsize = 20;
	cout << "What is your first name? ";
	char fname[arsize];
	cin.getline(fname, arsize);
	cout << "What is your last name? ";
	char lname[arsize];
	cin.getline(lname, arsize);
	cout << "What letter grade do you deserve? ";
	char grade;
	cin >> grade;
	cout << "What is your age? ";
	int age;
	cin >> age;
	cout << "Name: " << lname << ", " << fname << endl;
	cout << "Grade: " << ++grade << endl;
	cout << "Age: " << age << endl;
	return 0;
}
