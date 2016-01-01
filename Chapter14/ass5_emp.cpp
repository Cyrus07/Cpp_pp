// ass5_emp.cpp
#include "ass5_emp.h"
using std::cout;
using std::endl;
using std::cin;

// abstr_emp
abstr_emp::abstr_emp()
	: fname("None"), lname("None"), job("None")
{}

abstr_emp::abstr_emp(const std::string & fn, const std::string & ln, const std::string & j) : fname(fn), lname(ln), job(j)
{}

void abstr_emp::ShowAll() const
{
	cout << "Name: " << fname << ", " << lname << endl
		<< "Job: " << job << endl;
}

void abstr_emp::SetAll()
{
	cout << "Please enter the info:\n"
		<< "First Name: ";
	cin >> fname;
	cout << "Last Name: ";
	cin >> lname;
	cout << "Job: ";
	cin >> job;
}

abstr_emp::~abstr_emp() {}

employee::employee()
	: abstr_emp() {}

std::ostream & operator<<(std::ostream & os, const abstr_emp & a)
{
	os << "Name: " << a.fname << ", " << a.lname << endl
		<< "Job: " << a.job << endl;
	return os;
}

// employee
employee::employee(const std::string & fn, const std::string & ln, const std::string & j): abstr_emp(fn, ln, j) {}

void employee::ShowAll() const
{
	abstr_emp::ShowAll();
	cout << endl;
}

void employee::SetAll()
{
	abstr_emp::SetAll();
}

std::ostream & operator<<(std::ostream & os, const employee & e)
{
	os << (const abstr_emp &) e;
	return os;
}

// manager
manager::manager() : abstr_emp(), inchargeof(0) {}
manager::manager(const std::string & fn, const std::string & ln,
		const std::string & j, int ico)
		: abstr_emp(fn, ln, j), inchargeof(ico) {}
manager::manager(const abstr_emp & a, int ico)
	: abstr_emp(a), inchargeof(ico) {}
manager::manager(const manager & m) : abstr_emp(m), inchargeof(m.inchargeof) {}

void manager::ShowAll() const
{
	abstr_emp::ShowAll();
	cout << "In Charge Of " << inchargeof << endl << endl;
}

void manager::SetAll()
{
	abstr_emp::SetAll();
	cout << "In Charge Of: ";
	cin >> inchargeof;
}

std::ostream & operator<<(std::ostream & os, const manager & m)
{
	os << (const abstr_emp &) m;
	os << "In Charge Of " << m.inchargeof << endl;
	return os;
}

fink::fink() : abstr_emp(), reportsto("None") {}
fink::fink(const std::string & fn, const std::string & ln,
		const std::string & j, const std::string & rpo)
	: abstr_emp(fn, ln, j), reportsto(rpo) {}
fink::fink(const abstr_emp & a, const std::string & rpo)
	: abstr_emp(a), reportsto(rpo) {}
fink::fink(const fink & f)
	: abstr_emp(f), reportsto(f.reportsto) {}

void fink::ShowAll() const
{
	abstr_emp::ShowAll();
	cout << "Reports To " << reportsto << endl << endl;
}

void fink::SetAll()
{
	abstr_emp::SetAll();
	cout << "Reports To: ";
	cin >> reportsto;
}

std::ostream & operator<<(std::ostream & os, const fink & f)
{
	os << (const abstr_emp &)f;
	os << "Reports To " << f.reportsto << endl;
	return os;
}

highfink::highfink() {}

highfink::highfink(const std::string & fn, const std::string & ln, const std::string & j, const std::string & rpo, int ico)
	: abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo) {}

highfink::highfink(const fink & f, int ico)
	: abstr_emp(f), fink(f), manager(f, ico) {}

highfink::highfink(const manager & m, const std::string & rpo)
	: abstr_emp(m), fink(m, rpo), manager(m) {}

highfink::highfink(const highfink & f)
	: abstr_emp(f), fink(f), manager(f) {}

void highfink::ShowAll() const
{
	abstr_emp::ShowAll();
	cout << "In Charge Of: " << InChargeOf() << endl;
	cout << "Reports To: " << ReportsTo() << endl << endl;
}

void highfink::SetAll()
{
	manager::SetAll();
	cout << "Reports To: ";
	cin >> ReportsTo();
}
