// time.cpp -- implementing Time methods

#include "time.h"

Time::Time()
{
	hours = minutes = 0;
}

Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}

void Time::AddMin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}

void Time::AddHr(int h)
{
	hours +=h;
}

void Time::Reset(int h, int m)
{
	hours = h;
	minutes = m;
}

Time operator+(const Time & t1, const Time & t2)
{
	int h = t1.hours + t2.hours;
	int m = t1.minutes + t2.minutes;
	h += m / 60;
	m %= 60;
	return Time(h, m);
}

Time operator-(const Time & t1, const Time & t2)
{
	int h = t1.hours - t2.hours - 1;
	int m = t1.minutes - t2.minutes + 60;
	h += m / 60;
	m %= 60;
	return Time(h, m);
}

Time operator*(const Time & t, double n)
{
	int m = t.hours * 60 * n + t.minutes * n;
	int h = m / 60;
	m %= 60;
	return Time(h, m);
}

std::ostream & operator<<(std::ostream & os, const Time & t)
{
	os << t.hours << " hours, " << t.minutes << " minutes";
	return os;
}
