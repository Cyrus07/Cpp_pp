#include "workermi.h"
#include "ass3_queuetp.h"
#include <iostream>
#include <cstring>
const int SIZE = 5;

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::strchr;

	QueueTP<Worker *> q(SIZE);
//	Worker * lolas[SIZE];
	Worker * temp;
	int ct;
	for (ct = 0; ct < SIZE; ct++)
	{
		char choice;
		cout << "Enter the employee category:\n"
			<< "w: waiter\n"
			<< "s: singer\n"
			<< "t: singing waiter\n"
			<< "q: quit\n";
		cin >> choice;
		while (strchr("wstq", choice) == NULL)
		{
			cout << "Please enter a w, s, t, q: ";
			cin >> choice;
		}
		if (choice == 'q')
			break;
		switch (choice)
		{
			case 'w':	temp = new Waiter; break;
			case 's':	temp = new Singer; break;
			case 't':	temp = new SingingWaiter; break;
		}
		cin.get();
		temp->Set();
		q.enqueue(temp);
	}

	cout << "\nHere is your staff:\n";
	int i;
	for (i = 0; i < ct; i++)
	{
		cout << endl;
		q.dequeue(temp);
		temp->Show();
	}
	cout << "Bye!\n";
	return 0;
}
