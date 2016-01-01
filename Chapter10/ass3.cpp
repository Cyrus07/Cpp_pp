#include"ass3_golf.h"

int main()
{
	Golf coer[5] = 
	{
		{"Lingchen Huang", 24}
	};
	for (int i = 1; i < 5; i++)
		coer[i].SetGolf();
	coer[0].Handicap(12);
	for (int i = 0; i < 5; i++)
		coer[i].Show();
	return 0;
}
