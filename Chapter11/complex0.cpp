#include <iostream>
#include "complex0.h"

complex0::complex0(double r, double i)
{
	real = r;
	imag = i;
}

complex0 complex0::operator+(const complex0 & c)
{
	return complex0(real + c.real, imag + c.imag);
}

complex0 complex0::operator-(const complex0 & c)
{
	return complex0(real - c.real, imag - c.imag);
}

complex0 complex0::operator*(const complex0 & c)
{
	return complex0(real*c.real - imag*c.imag, real*c.imag + imag*c.real);
}

complex0 complex0::operator~() const
{
	return complex0(real, -imag);
}

std::istream & operator>>(std::istream & is, complex0 & c)
{
	double r, i;
	std::cout << "real: \n";
	if (is >> r)
		c.real = r;
	else 
		return is;
	if (is >> i)
		c.imag = i;
	else 
		return is;
	return is;
}

std::ostream & operator<<(std::ostream & os, const complex0 c)
{
	os << "(" << c.real << "," << c.imag << "i)";
	return os;
}

complex0 operator*(double d, const complex0 & c)
{
	return complex0(d * c.real, d * c.imag);
}
