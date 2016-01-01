// ass1_cd.cpp

#include <iostream>
#include <cstring>
#include "ass1_cd.h"

// Cd methods
Cd::Cd(const char * s1, const char * s2, int n, double x)
{
	std::strcpy(performers, s1);
	std::strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd & d)
{
	std::strcpy(performers, d.performers);
	std::strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd()
{
	performers[0] = '\0';
	label[0] = '\0';
	selections = 0;
	playtime = 0;
}

Cd::~Cd()
{
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
	std::strcpy(performers, d.performers);
	std::strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

// Classic methods
Classic::Classic(const char * s0, const char * s1, const char * s2, int n, double x)
	: Cd(s1, s2, n, x)
{
	std::strncpy(works, s0, 49);
	works[49] = '\0';
}

Classic::Classic(const char * s0, const Cd & d)
	: Cd(d)
{
	std::strncpy(works, s0,49);
	works[49] = '\0';
}

Classic::Classic(const Classic & c)
	: Cd(c)
{
	std::strncpy(works, c.works, 49);
	works[49] = '\0';
}

Classic::Classic()
	: Cd()
{
	works[0] = '\0';
}

Classic::~Classic()
{}

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
	std::strncpy(works, c.works, 49);
	works[49] = '\0';
	return *this;
}
