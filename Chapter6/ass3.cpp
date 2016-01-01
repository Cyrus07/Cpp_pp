#include<iostream>

int main()
{
	using std::cout;
	using std::cin;

	char ch;
	cout << "Please enter one of the following choices:\n"
		<< "c) carnivore\t\tp) pianist\n"
		<< "t) tree\t\tg) game\n";
	while (cin >> ch) 
		if (ch!='c' && ch!='p' && ch!='t' && ch !='g')
			cout << "Please enter a c, p, t, or g: ";
		else
			switch (ch)
			{
				case 'c': cout << "carnivore.\n"; break;
				case 'p': cout << "pianist.\n"; break;
				case 't': cout << "tree.\n"; break;
				case 'g': cout << "game.\n"; break;
			}
	return 0;
}
