#include<iostream>
#include"ass4_sale.h"

namespace SALES
{

	Sales::Sales(const double ar[], int n)
	{
		if (n <= 4)
		{
			for (int i = 0; i < n; i++)
				sales[i] = ar[i];
			for (int i = n; i < 4; i++)
				sales[i] = 0;
		}
		else
			for (int i =0; i < 4; i++)
				sales[i] = ar[i];
	}

	Sales::Sales()
	{
		using std::cout;
		using std::cin;
		using std::endl;
		
		cout << "Enter the sales info (0 for not available):\nSpring:\t";
		cin >> sales[0];
		cout << "Summer:\t";
		cin >> sales[1];
		cout << "Fall:\t";
		cin >> sales[2];
		cout << "Winter:\t";
		cin >> sales[3];
	}

	double Sales::Average()
	{
		double temp_sum = sales[0];
		for (int i = 1; i < 4; i++)
			temp_sum += sales[i];
		average = temp_sum / 4;
		return average;
	}

	double Sales::Max()
	{
		double max = sales[0];
		for (int i = 1; i < 4; i++)
			max = max > sales[i]?max:sales[i];
		return max;
	}

	double Sales::Min()
	{
		double min = sales[0];
		for (int i = 1; i < 4; i++)
			min = min < sales[i]?min:sales[i];
		return min;
	}

	void Sales::Show()
	{
		using std::cout;
		using std::endl;

		cout << "Sales info:" << endl
			 << "Spring:\t" << sales[0] << endl
			 << "Summer:\t" << sales[1] << endl
			 << "Fall:\t" << sales[2] << endl
			 << "Winter\t" << sales[3] << endl
			 << "Average:\t" << Average() << endl
			 << "Maximum:\t" << Max() << endl
			 << "Minimum:\t" << Min() << endl;
	}
}
