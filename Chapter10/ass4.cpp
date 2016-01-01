#include"ass4_sale.h"

int main()
{
	using namespace SALES;

	double ar0[4] = {1,2,3,4};
	Sales tek[2] = 
	{
		{ar0, 4},
		{},
	};
	for (int i = 0; i < 2; i++)
		tek[i].Show();
	return 0;
}
