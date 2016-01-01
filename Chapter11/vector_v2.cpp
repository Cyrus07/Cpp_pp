// vect.cpp -- methods for the Vector class
#include <cmath>
#include "vector_v2.h"
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR
{
	const double Rad_to_deg = 45.0 / atan(1.0);

// public methods
	Vector::Vector()
	{
		x = y = 0.0;
	}

	Vector::Vector(double n1, double n2, Mode form)
	{
		if (form == RECT)
		{
			x = n1;
			y = n2;
		}
		else if (form == POL)
		{
			x = n1 * cos(n2);
			y = n2 * sin(n2);
		}
		else 
		{
			cout << "Incorrect 3rd argument to Vector() --";
			cout << "vector set to 0\n";
			x = y = 0;
		}
	}

	void Vector::reset(double n1, double n2, Mode form)
	{
		if (form == RECT)
		{
			x = n1;
			y = n2;
		}
		else if (form == POL)
		{
			x = n1 * cos(n2);
			y = n1 * sin(n2);
		}
		else 
		{
			cout << "Incorrect 3rd argument to Vector() --";
			cout << "vector set to 0\n";
			x = y = 0;
		}
	}

	Vector::~Vector()
	{}

	double Vector::magval() const
	{
		return sqrt(x * x + y * y);
	}

	double Vector::angval() const
	{
		if (x == 0.0 && y == 0.0)
			return 0.0;
		else 
			return atan2(y, x);
	}

// operator overloading
	Vector Vector::operator+(const Vector & b) const
	{
		return Vector(x + b.x, y + b.y);
	}

	Vector Vector::operator-(const Vector & b) const
	{
		return Vector(x - b.x, y - b.y);
	}

	Vector Vector::operator-() const
	{
		return Vector(-x, -y);
	}

	Vector Vector::operator*(double n) const
	{
		return Vector(n * x, n * y);
	}

// friend methods
	Vector operator*(double n, Vector & a)
	{
		return a * n;
	}

	std::ostream & operator<<(std::ostream & os, const Vector & v)
	{
		os << "(x, y) = (" << v.x << ", " << v.y << ")";
		return os;
	}
}
