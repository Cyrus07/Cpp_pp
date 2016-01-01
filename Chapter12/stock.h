// stock.h --
#ifndef STOCK_H_
#define STOCK_H_
#include <iostream>
class Stock
{
private:
	// std::string company;
	char * company;
	int shares;
	double share_val;
	double total_val;
	void set_tot() {total_val = shares * share_val; }
public:
	Stock();
	// Stock(const std::string & co, long n = 0, double pr = 0.0);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	// void show() const;
	const Stock & topval(const Stock & s) const;
	// ass3
	friend std::ostream & operator<<(std::ostream & os, const Stock & s);
	Stock(const char * co, long n = 0, double pr = 0.0);
	~Stock();
};
#endif
