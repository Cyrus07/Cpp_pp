#include<string>

#ifndef BANKACCOUNT_H_
#define BANKACCOUNT_H_
class BankAccount
{
	private:
		std::string m_name;
		std::string m_number;
		double m_balance;
	public:
		BankAccount(std::string name = "NA", std::string number = "0000", double balance = 0);
		void show();
		void deposit(double amount);
		void draw(double amount);
};
#endif
