// usebrass1.cpp -- testing bank accout classes
// compile with brass.cpp

#include <iostream>
#include "brass.h"

int main()
{
	using std::cout;
	using std::endl;

	Brass Piggy("Porcelot Pigg", 381299, 4000.00);
	BrassPlus Hoggy("Horatio Hogg", 382299, 3000.00);
	Piggy.ViewAcct();
	cout << endl;
	Hoggy.ViewAcct();
	cout << endl;
	cout << "Depositing $1000 into the Hogg Accout:\n";
	Hoggy.Deposit(1000.00);
	cout << "New balance: $" << Hoggy.Balance() << endl;
	cout << "Withdrawing $4200 from the Pigg Accout.\n";
	Piggy.Withdraw(4200.00);
	cout << "Pigg accout balance: $" << Piggy.Balance() << endl;
	cout << "Withdrawing $4200 from the Hogg Accout.\n";
	Hoggy.Withdraw(4200);
	Hoggy.ViewAcct();

	return 0;
}
