#include<iostream>
using namespace std;
#include<cstring>
struct stringy
{
	char * str;
	int ct;
};

void set(stringy &, char *);

void show(const stringy &, int n = 1);

void show(const char * const, int n = 1);

int main()
{
	stringy beany;
	char testing [] = "Reality isn't what it used to be.";

	set(beany, testing);
	show(beany);
	show(beany, 2);
	delete [] beany.str;
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
	return 0;
}

void set(stringy & stry, char * charr)
{
	int n = strlen(charr);
	stry.str = new char [n];
	strcpy(stry.str, charr);
	stry.ct = n;
}

void show(const stringy & stry, int n)
{
	for (int i = 0; i < n; i++)
		cout << stry.str << endl;
}

void show(const char * const charr, int n)
{
	for (int i = 0; i < n; i++)
		cout << charr << endl;
}
