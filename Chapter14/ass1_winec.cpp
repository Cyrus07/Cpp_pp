#include "ass1_winec.h"
#include <iostream>
Wine::Wine(const char * l, int y, const int yr[], const int bot[]) : label(l), years(y)
{
	ArrayInt a(yr, y);
	ArrayInt b(bot, y);
	year_bottle.first() = a;
	year_bottle.second() = b;
}

Wine::Wine(const char * l, int y) : label(l), years(y)
{
	year_bottle.first() = ArrayInt(y);
	year_bottle.second() = ArrayInt(y);;
}

void Wine::GetBottles()
{
	std::cout << "Enter " << label << " data for " << years << " year(s):\n";
	for (int i = 0; i < years; i++)
	{
		std::cout << "Enter year: ";
		std::cin >> year_bottle.first()[i];
		std::cout << "Enter bottles for that year: ";
		std::cin >> year_bottle.second()[i];
	}
	while (std::cin.get() != '\n')
		continue;
}

std::string & Wine::Label()
{
	return label;
}

int Wine::sum()
{
	return year_bottle.second().sum();
}

void Wine::Show()
{
	std::cout << "Wine: " << label
		<< "\n\tYear\tBottles\n";
	for (int i = 0; i < years; i++)
		std::cout << "\t" << year_bottle.first()[i] << '\t'
			<< year_bottle.second()[i] << std::endl;
}
