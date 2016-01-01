// ass1_winec.h
#ifndef ASS1_WINEC_H_
#define ASS1_WINEC_H_

#include <valarray>
#include <string>
#include "pairs.h"
typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine
{
private:
	std::string label;
	PairArray year_bottle;
	int years;
public:
	Wine(const char * l, int y, const int yr[], const int bot[]);
	Wine(const char * l, int y);
	void GetBottles();
	std::string & Label();
	int sum();
	void Show();
};

#endif
