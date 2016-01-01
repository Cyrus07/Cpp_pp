// ass4.cpp
#include "ass4_person.h"
#include <iostream>

const int SIZE = 3;

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	Person * lolas[SIZE];
	lolas[0] = new Gunslinger("James", "Bund", 20, 0.1);
	lolas[1] = new PokerPlayer("Runfa", "Zhou");
	lolas[2] = new BadDude("Haonan", "Chen", 20, 0.5);

	for (int ct = 0; ct < SIZE; ct++)
	{
		lolas[ct]->Show();
		delete lolas[ct];
		cout << endl;
	}
	cout << "Bye\n";
	return 0;
}
