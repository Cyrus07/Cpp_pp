// exc_mean.h
#include <iostream>
#include <stdexcept>
#include <string>
using std::string;

class bad_mean : public std::logic_error
{
public:
	double v1;
	double v2;
	explicit bad_mean(double a = 0, double b = 0, const string & what_arg = "None") : v1(a), v2(b), logic_error(what_arg) {}
	virtual void show() const {}
};

class bad_hmean : public bad_mean
{
public:
	bad_hmean(double a, double b) : bad_mean(a, b) {}
	void show() const;
};
inline void bad_hmean::show() const
{
	std::cout << "Error Arguments: (" << v1 << ", " << v2 << ")\n"
		<< "Error Function: hmean\n";
}

class bad_gmean : public bad_mean
{
public:
	explicit bad_gmean(double a, double b) : bad_mean(a, b) {}
	void show() const;
};
inline void bad_gmean::show() const
{
	std::cout << "Error Arguments: (" << v1 << ", " << v2 << ")\n"
		<< "Error Function: gmean\n";
}
