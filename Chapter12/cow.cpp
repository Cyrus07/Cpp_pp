#include "cow.h"
#include <iostream>
#include <cstring>

Cow::Cow()
{
	strcpy(name, "NA");
	hobby = new char [1];
	*hobby = '\0';
	weight = 0;
}

Cow::Cow(const char * nm, const char * ho, double wt)
{
	strcpy(name, nm);
	hobby = new char [strlen(ho)+1];
	strcpy(hobby, ho);
	weight = wt;
}

Cow::Cow(const Cow & c)
{
	strcpy(name, c.name);
	hobby = new char [strlen(c.hobby) + 1];
	strcpy(hobby, c.hobby);
	weight = c.weight;
}

Cow::~Cow()
{
	delete [] hobby;
}

Cow & Cow::operator=(const Cow & c)
{
	if (this == &c)
		return *this;
	strcpy(name, c.name);
	delete [] hobby;
	hobby = new char [strlen(c.hobby)+1];
	strcpy(hobby, c.hobby);
	weight = c.weight;
}

void Cow::ShowCow() const
{
	std::cout << "Name:\t" << name
			  << "\nHobby:\t" << hobby
			  << "\nWeight:\t" << weight << std::endl;
}
