#include"ass4_sale.h"

int main()
{
	using namespace SALES;

	Sales tek[2];
	double ar0[4] = {1,2,3,4};
	setSales(tek[0], ar0, 4);
	setSales(tek[1]);
	for (int i = 0; i < 2; i++)
		showSales(tek[i]);
	return 0;
}
