#ifndef COMPLEX0_H_
#define COMPLEX0_H_

#include <iostream>
class complex0
{
private:
	double real;
	double imag;
public:
	complex0(double r = 0, double i = 0);
	complex0 operator+(const complex0 & c);
	complex0 operator-(const complex0 & c);
	complex0 operator*(const complex0 & c);
	complex0 operator~() const;
	friend std::istream & operator>>(std::istream & is, complex0 & c);
	friend std::ostream & operator<<(std::ostream & os, const complex0 c);
	friend complex0 operator*(double d, const complex0 & c);
};

#endif
