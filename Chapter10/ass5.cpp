#include "ass5_customer.h"
#include "stack.h"
#include <iostream>

int main()
{
	customer customers[4] = 
	{
		{"Lingchen Huang", 7.7},
		{"Jingru Li", 11.19},
		{"Zhenfeng Zhu", 250},
		{"Longhai Yu", 100}
	};
	Stack stack107;
	for (int i = 0; i < sizeof(customers)/sizeof(customer); i++)
		stack107.push(customers[i]);
	customer temp;
	double total_payment = 0;
	for (int i = 0; i < sizeof(customers)/sizeof(customer); i++)
	{
		stack107.pop(temp);
		total_payment += temp.payment;
		std::cout << total_payment << std::endl;
	}
	return 0;
}
