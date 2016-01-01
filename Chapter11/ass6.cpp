#include "stonewt_v3.h"

int main()
{
	Stonewt stns[6] = 
	{
		Stonewt(10),
		Stonewt(11),
		Stonewt(12)
	};
	double pds;
	std::cout << "Enter the pounds of the remaining three objects:\n";
	for (int i = 3; i < 6; i++)
	{
		std::cin >> pds;
		stns[i] = Stonewt(pds);
	}
	
	Stonewt stn_max = stns[0];
	for (int i = 1; i < 6; i++)
		stn_max = stn_max>stns[i]?stn_max:stns[i];
	std::cout << "Maximum pound is " << stn_max;

	Stonewt stn_min = stns[0];
	for (int i = 1; i < 6; i++)
		stn_min = stn_min<stns[i]?stn_min:stns[i];
	std::cout << "Minimum pound is " << stn_min;
	
	Stonewt stn_11 = Stonewt(11);
	for (int i = 0; i < 6; i++)
		if(stns[i] >= stn_11)
			std::cout << (i+1) << "th object is larger than or equal to 11 pounds\n";
	
	return 0;
}
