// ass1_cd.cpp

#include <iostream>
#include "ass2_cd.h"
#include <cstring>
// Cd methods
Cd::Cd(const char * s1, const char * s2, int n, double x)
{
	performers = new char[strlen(s1) + 1];
	std::strcpy(performers, s1);
	label = new char[strlen(s2) + 1];
	std::strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd & d)
{
	performers = new char[strlen(d.performers) + 1];
	std::strcpy(performers, d.performers);
	label = new char[strlen(d.label) + 1];
	std::strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd()
{
	performers = nullptr;
	label = nullptr;
	selections = 0;
	playtime = 0;
}

Cd::~Cd()
{
	delete [] performers;
	delete [] label;
}

void Cd::Report() const
{
	std::cout << "Performer: " << performers << std::endl
		<< "Label: " << label << std::endl
		<< "Selections: " << selections << std::endl
		<< "Playtime: " << playtime << std::endl << std::endl;
}

Cd & Cd::operator=(const Cd & d)
{
	if (this == &d)
		return * this;
	delete [] performers;
	performers = new char[std::strlen(d.performers) + 1];
	std::strcpy(performers, d.performers);
	delete [] label;
	label = new char[std::strlen(d.label) + 1];
	std::strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

// Classic methods
Classic::Classic(const char * s0, const char * s1, const char * s2, int n, double x)
	: Cd(s1, s2, n, x)
{
	works = new char[std::strlen(s0) + 1];
	std::strcpy(works, s0);
}

Classic::Classic(const char * s0, const Cd & d)
	: Cd(d)
{
	works = new char[std::strlen(s0) + 1];
	std::strcpy(works, s0);
}

Classic::Classic(const Classic & c)
	: Cd(c)
{
	works = new char[std::strlen(c.works) + 1];
	std::strcpy(works, c.works);
}

Classic::Classic()
	: Cd()
{
	works = nullptr;
}

Classic::~Classic()
{
	delete [] works;
}

void Classic::Report() const
{
	std::cout << works << std::endl;
	Cd::Report();
}

Classic & Classic::operator=(const Classic & c)
{
	if (this == &c)
		return * this;
	Cd::operator=(c);
	delete [] works;
	works = new char[std::strlen(c.works) + 1];
	std::strcpy(works, c.works);
	return *this;
}
