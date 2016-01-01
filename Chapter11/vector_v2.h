// vect.h -- Vector class with <<, mode state

#ifndef VECTOR_V2_H_
#define VECTOR_V2_H_
#include <iostream>
namespace VECTOR
{
	class Vector
	{
	private:
		double x;
		double y;
	public:
		enum Mode {RECT, POL};
		Vector();
		Vector(double n1, double n2, Mode form = RECT);
		void reset(double n1, double n2, Mode form = RECT);
		~Vector();
		double xval() const {return x;}
		double yval() const {return y;}
		double magval() const;
		double angval() const;
		void polar_mode() const {}
	// operator overloading
		Vector operator+(const Vector & b) const;
		Vector operator-(const Vector & b) const;
		Vector operator-() const;
		Vector operator*(double n) const;
	// friends
		friend Vector operator*(double n, const Vector & a);
		friend std::ostream &
				operator<<(std::ostream & os, const Vector & v);
	};
}
#endif
