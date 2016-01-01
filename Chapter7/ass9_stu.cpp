#include<iostream>
#include"ass9.h"

int getinfo(student pa [], int n)
{
	using namespace std;
	int i;
	for (i = 0; i < n; i++)
	{
		cout << "Enter the name of student #" << (i+1) << ": ";
		cin.get((pa+i)->fullname, SLEN);
		if (!cin)
		{
			cin.clear();
			break;
		}
		cin.get();
		cout << "Enter the hobby of student #" << (i+1) << ": ";
		cin.get((pa+i)->hobby, SLEN);
		if (!cin)
			cin.clear();
		cout << "Enter the ooplevel of student #" << (i+1) << ": ";
		cin >> (pa+i)->ooplevel;
		cin.get();
	}
	return i;
}

void display1(student st)
{
	using namespace std;
	cout << "Name of student: " << st.fullname << endl
		 << "Hobby: " << st.hobby << endl
		 << "Ooplevel: " << st.ooplevel << endl;
}

void display2(const student * ps)
{
	using namespace std;
	cout << "Name of student: " << ps->fullname << endl
		 << "Hobby: " << ps->hobby << endl
		 << "Ooplevel: " << ps->ooplevel << endl;
}

void display3(const student pa [], int n)
{
	using namespace std;
	for (int i = 0; i < n; i++)
		cout << "Name of student: " << (pa+i)->fullname << endl
			 << "Hobby: " << (pa+i)->hobby << endl
			 << "Ooplevel: " << (pa+i)->ooplevel << endl;
}
