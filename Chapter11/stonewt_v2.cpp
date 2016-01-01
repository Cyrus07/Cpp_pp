// stonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;
#include "stonewt_v2.h"

Stonewt::Stonewt(double lbs, Mode form)
{
	stone = int (lbs) / Lbs_per_stn;
	pds_left = int (lbs) % Lbs_per_stn + lbs - int (lbs);
	pounds = lbs;
	mode = form;
}

Stonewt::Stonewt(int stn, double lbs, Mode form)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
	mode = form;
}

Stonewt::Stonewt()
{
	stone = pounds = pds_left = 0;
	mode = STONE;
}

Stonewt::~Stonewt()
{
}

std::ostream & operator<<(std::ostream & os, const Stonewt stn)
{
	if (stn.mode == Stonewt::STONE)
		os << stn.stone << " stone, " << stn.pds_left << " pounds\n";
	else if (stn.mode == Stonewt::POUND)
		os << stn.pounds << " pounds\n";
	else 
		os << "Mode invalid.";
	return os;
}

Stonewt operator+(const Stonewt stn1, const Stonewt stn2)
{
	return Stonewt(stn1.pounds + stn2.pounds);
}

Stonewt operator-(const Stonewt stn1, const Stonewt stn2)
{
	return Stonewt(stn1.pounds - stn2.pounds);
}

Stonewt operator*(double n, const Stonewt stn)
{
	return Stonewt(n * stn.pounds);
}
