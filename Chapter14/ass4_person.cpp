// ass4_person
#include "ass4_person.h"
#include <iostream>
#include <cstdlib> // rand()

Person::~Person()
{}

void Person::Data() const
{
	std::cout << "First Name: " << fname << ", Last Name: " << lname << std::endl;
}

void Person::Show() const
{
	Data();
}

double Gunslinger::Draw() const
{
	return drawtime;
}

void Gunslinger::Data() const
{
	std::cout << "GunGrid: " << gungrid << ", DrawTime: " << drawtime << std::endl;
}

void Gunslinger::Show() const
{
	Person::Data();
	Data();
}

PokerPlayer::PokerPlayer(const std::string & l, const std::string & f) : Person(l, f), draw(rand() % 54 + 1)
{
}

void PokerPlayer::Data() const
{
	std::cout << "Card Number: " << Draw() << std::endl;
}

void PokerPlayer::Show() const
{
	Person::Data();
	Data();
}

int PokerPlayer::Draw() const
{
	return draw;
}

double BadDude::Gdraw() const
{
	return Gunslinger::Draw();
}

int BadDude::Cdraw() const
{
	return PokerPlayer::Draw();
}

void BadDude::Show() const
{
	Person::Data();
	Gunslinger::Data();
	PokerPlayer::Data();
	Data();
}
