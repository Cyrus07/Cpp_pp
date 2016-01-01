#include "ass7_plorg.h"
#include <cstring>
#include <iostream>

Plorg::Plorg(const char * name, int ci)
{
	if (strlen(name) < 19)
		strcpy(fullname, name);
	else
		std::cout << "Name Length Exceed Limit!" << std::endl;
	CI = ci;
}

void Plorg::SetCI(int ci)
{
	CI = ci;
}

void Plorg::Show() const
{
	std::cout << "Plorg info\nName:\t" << fullname
			  << "\nCI:\t" << CI << std::endl;
}

