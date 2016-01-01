#include"ass1_bankaccount.h"
#include<iostream>

BankAccount::BankAccount(std::string name, std::string number, double balance)
{
	m_name = name;
	m_number = number;
	m_balance = balance;
}

void BankAccount::show()
{
	using std::endl;
	using std::cout;
	cout << "Bank Account info:" << endl
		 << "Name:\t" << m_name << endl
		 << "Number: \t" << m_number << endl
		 << "Balance:\t" << m_balance << endl;
}

void BankAccount::deposit(double amount)
{
	m_balance += amount;
}

void BankAccount::draw(double amount)
{
	m_balance -= amount;
}
