// stonewt_v3.h -- definition for the stonewt class
#ifndef STONEWT_V3_H_
#define STONEWT_V3_H_
#include <iostream>
class Stonewt
{
public:
	enum Mode {STONE, POUND};
private:
	enum {Lbs_per_stn = 14};
	int stone;
	double pds_left;
	double pounds;
	Mode mode;
public:
	Stonewt(double lbs, Mode form = POUND);
	Stonewt(int stn, double lbs, Mode form = STONE);
	Stonewt();
	~Stonewt();
	friend std::ostream & operator<<(std::ostream & os, const Stonewt stn);
	friend Stonewt operator+(const Stonewt stn1, const Stonewt stn2);
	friend Stonewt operator-(const Stonewt stn1, const Stonewt stn2);
	friend Stonewt operator*(double n, const Stonewt stn);
	friend Stonewt operator*(const Stonewt stn, double n) {return n * stn;}
	bool operator>(const Stonewt stn);
	bool operator>=(const Stonewt stn);
	bool operator<(const Stonewt stn);
	bool operator<=(const Stonewt stn);
	bool operator==(const Stonewt stn);
	bool operator!=(const Stonewt stn);
};
#endif
