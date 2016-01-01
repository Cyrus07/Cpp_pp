#include<iostream>
#include<cstring>
#include"ass3_golf.h"

Golf::Golf(const char * name, int hc)
{
	strcpy(fullname, name);
	handicap = hc;
}

int Golf::SetGolf()
{
	using std::cin;
	using std::cout;
	using std::endl;
	cout << "Enter the name: ";
	char name[Len];
	cin.getline(name, Len);
	cout << "Enter the handicap: ";
	int hc;
	cin >> hc;
	cin.get();
	if (name[0] == '\0')
		return 0;
	else 
		strcpy(fullname, name);
		handicap = hc;
	return 1;
}

void Golf::Handicap(int hc)
{
	handicap = hc;
}

void Golf::Show() const
{
	using std::cout;
	using std::endl;

	cout << "The name of golf player is " << fullname 
		 << ", and the handicap is " << handicap << ".\n";
}
