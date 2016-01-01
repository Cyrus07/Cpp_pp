#include<iostream>

const int strsize = 20;
struct bop
{
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference; // 0 = fullname, 1 = title, 2 = bopname
};

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	const int n_id = 5;
	bop id[n_id] = 
	{
		{"Wimp Macho", "Mr.1", "wm", 0},
		{"Raki Rhodes", "Mr.2", "rr", 1},
		{"Celia Laiter", "Mr.3", "cl", 2},
		{"Hoppy Hipman", "Mr.4", "hh", 0},
		{"Pat Hand", "Mr.5", "ph", 1}
	};
	cout << "Benevolent Order of Programmers Report\n"
		<< "a. display by name\t\tb. display by title\n"
		<< "c. display by bopname\t\td. display by preference\n"
		<< "q. quit\n"
		<< "Enter your choice: ";
	char ch;
	while (cin>>ch)
	{
		if (ch=='a')
			for (int i=0; i<n_id; i++)
				cout << id[i].fullname << endl;
		else if (ch=='b')
			for (int i=0; i<n_id; i++)
				cout << id[i].title << endl;
		else if (ch=='c')
			for (int i=0; i<n_id; i++)
				cout << id[i].bopname << endl;
		else if (ch=='d')
			for (int i=0; i<n_id; i++)
			{
				switch (id[i].preference)
				{
					case 0: cout << id[i].fullname << endl;break;
					case 1: cout << id[i].title << endl;break;
					case 2: cout << id[i].bopname << endl;break;
				};
			}
		else if (ch=='q')
		{
			cout << "Bye!" << endl;
			break;
		}
		cout << "Next choice: ";
	}
	return 0;
}
