// ass1_winec.h
#ifndef ASS1_WINEC_H_
#define ASS1_WINEC_H_

#include <valarray>
#include <string>
#include "pairs.h"
typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine : private PairArray, private std::string
{
private:
//	std::string label;
	int years;
//	PairArray year_bottle;
public:
	Wine(const char * l, int y, const int yr[], const int bot[]);
	Wine(const char * l, int y);
	void GetBottles();
	const std::string & Label();
	int sum();
	void Show();
};

#endif
