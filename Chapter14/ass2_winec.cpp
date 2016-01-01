#include "ass2_winec.h"
#include <iostream>
Wine::Wine(const char * l, int y, const int yr[], const int bot[]) : std::string(l), years(y), PairArray()
{
	PairArray::operator=(PairArray(ArrayInt(yr, y), ArrayInt(bot, y)));
}

Wine::Wine(const char * l, int y) : std::string(l), years(y), PairArray()
{
	PairArray::operator=(PairArray(ArrayInt(y), ArrayInt(y)));
}

void Wine::GetBottles()
{
	std::cout << "Enter " << (const std::string &)*this << " data for " << years << " year(s):\n";
	for (int i = 0; i < years; i++)
	{
		std::cout << "Enter year: ";
		std::cin >> PairArray::first()[i];
		std::cout << "Enter bottles for that year: ";
		std::cin >> PairArray::second()[i];
	}
	while (std::cin.get() != '\n')
		continue;
}

const std::string & Wine::Label()
{
	return (const std::string &)*this;
}

int Wine::sum()
{
	return PairArray::second().sum();
}

void Wine::Show()
{
	std::cout << "Wine: " << (const std::string &)*this
		<< "\n\tYear\tBottles\n";
	for (int i = 0; i < years; i++)
		std::cout << "\t" << PairArray::first()[i] << '\t'
			<< PairArray::second()[i] << std::endl;
}
