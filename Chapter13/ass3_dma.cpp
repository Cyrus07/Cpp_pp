// dma.cpp -- dma class methods

#include <cstring>
#include "ass3_dma.h"

// ABC class methods
abcDMA::abcDMA(const char * l, int r)
{
	if (l == nullptr)
		label = nullptr;
	else
	{
		label = new char[std::strlen(l) + 1];
		std::strcpy(label, l);
	}
	rating = r;
}

abcDMA::abcDMA(const abcDMA & rs)
{
	label = new char[std::strlen(rs.label) + 1];
	std::strcpy(label, rs.label);
	rating = rs.rating;
}

abcDMA::~abcDMA()
{
	delete [] label;
}

abcDMA & abcDMA::operator=(const abcDMA & rs)
{
	if (this == &rs)
		return *this;
	delete [] label;
	label = new char[std::strlen(rs.label) + 1];
	std::strcpy(label, rs.label);
	rating = rs.rating;
	return *this;
}

std::ostream & operator<<(std::ostream & os, const abcDMA & rs)
{
	os << "Label: " << rs.label << std::endl;
	os << "Rating: " << rs.rating << std::endl;
	return os;
}

// baseDMA methods
baseDMA & baseDMA::operator=(const baseDMA & rs)
{
	if (this == &rs)
		return * this;
	abcDMA::operator=(rs);
	return * this;
}

/*
std::ostream & operator<<(std::ostream & os, const baseDMA & rs)
{
	os << "Label: " << rs.label << std::endl;
	os << "Rating: " << rs.rating << std::endl;
	return os;
}
*/

// lacksDMA methods
lacksDMA::lacksDMA(const char * c, const char * l, int r)
	: abcDMA(l, r)
{
	std::strncpy(color, c, COL_LEN-1);
	color[COL_LEN-1] = '\0';
}

lacksDMA::lacksDMA(const char * c, const baseDMA & rs)
	: abcDMA(rs)
{
	std::strncpy(color, c, COL_LEN -1);
	color[COL_LEN-1] = '\0';
}

std::ostream & operator<<(std::ostream & os, const lacksDMA & ls)
{
	os << (const abcDMA &) ls;
	os << "Color: " << ls.color << std::endl;
	return os;
}

// hasDMA methods
hasDMA::hasDMA(const char * s, const char * l, int r)
	: abcDMA(l, r)
{
	if (s == nullptr)
		style = nullptr;
	else
	{
		style = new char[std::strlen(s) + 1];
		std::strcpy(style, s);
	}
}

hasDMA::hasDMA(const char * s, const baseDMA & rs)
	: abcDMA(rs)
{
	style = new char[std::strlen(s)+1];
	std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA & hs)
	: abcDMA(hs)
{
	style = new char[std::strlen(hs.style) + 1];
	std::strcpy(style, hs.style);
}

hasDMA::~hasDMA()
{
	delete [] style;
}

hasDMA & hasDMA::operator=(const hasDMA & hs)
{
	if (this == &hs)
		return * this;
	abcDMA::operator=(hs);
	delete [] style;
	style = new char[std::strlen(hs.style) + 1];
	std::strcpy(style, hs.style);
	return * this;
}

std::ostream & operator<<(std::ostream & os, const hasDMA & hs)
{
	os << (const abcDMA &) hs;
	os << "Style: " << hs.style << std::endl;
	return os;
}
