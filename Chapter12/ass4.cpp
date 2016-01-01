#include "stack.h"
#include <iostream>

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	Item i;
	Stack items;
	cout << "Enter a item (q to quit):\n";
	while (cin >> i && !items.isfull())
	{
		items.push(i);
		cout << "Enter a item (q to quit):\n";
	}
	Stack items2 = items;
	while (!items2.isempty())
	{
		items2.pop(i);
		cout << i << endl;;
	}
	items = items2;
	cout << "Is stack empty: " << items.isempty() << endl;
	return 0;
}
