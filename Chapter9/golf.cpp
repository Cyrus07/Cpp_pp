#include<iostream>
#include<cstring>
#include"golf.h"

void setgolf(golf & g, const char * name, int hc)
{
	strcpy(g.fullname, name);
	g.handicap = hc;
}

int setgolf(golf & g)
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
		setgolf(g, name, hc);
	return 1;
}

void handicap(golf & g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf & g)
{
	using std::cout;
	using std::endl;

	cout << "The name of golf player is " << g.fullname 
		 << ", and the handicap is " << g.handicap << ".\n";
}
