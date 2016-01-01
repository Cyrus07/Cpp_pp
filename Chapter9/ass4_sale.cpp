#include<iostream>
#include"ass4_sale.h"

namespace SALES
{
	void setSales(Sales & s, const double ar[], int n)
	{
		if (n <= 4)
		{
			for (int i = 0; i < n; i++)
				s.sales[i] = ar[i];
			for (int i = n; i < 4; i++)
				s.sales[i] = 0;
		}
		else
			for (int i =0; i < 4; i++)
				s.sales[i] = ar[i];
		double temp_sum, temp_min, temp_max;
		temp_sum = temp_min = temp_max = s.sales[0];
		for (int i = 1; i < 4; i++)
		{
			temp_sum += s.sales[i];
			temp_min = temp_min < s.sales[i]?temp_min:s.sales[i];
			temp_max = temp_max > s.sales[i]?temp_max:s.sales[i];
		}
		s.average = temp_sum / 4;
		s.max = temp_max;
		s.min = temp_min;
	}

	void setSales(Sales & s)
	{
		using std::cout;
		using std::cin;
		using std::endl;
		
		cout << "Enter the sales info (0 for not available):\nSpring:\t";
		cin >> s.sales[0];
		cout << "Summer:\t";
		cin >> s.sales[1];
		cout << "Fall:\t";
		cin >> s.sales[2];
		cout << "Winter:\t";
		cin >> s.sales[3];

		double temp_sum, temp_min, temp_max;
		temp_sum = temp_min = temp_max = s.sales[0];
		for (int i = 1; i < 4; i++)
		{
			temp_sum += s.sales[i];
			temp_min = temp_min < s.sales[i]?temp_min:s.sales[i];
			temp_max = temp_max > s.sales[i]?temp_max:s.sales[i];
		}
		s.average = temp_sum / 4;
		s.max = temp_max;
		s.min = temp_min;
	}
	
	void showSales(const Sales & s)
	{
		using std::cout;
		using std::endl;

		cout << "Sales info:" << endl
			 << "Spring:\t" << s.sales[0] << endl
			 << "Summer:\t" << s.sales[1] << endl
			 << "Fall:\t" << s.sales[2] << endl
			 << "Winter\t" << s.sales[3] << endl
			 << "Average:\t" << s.average << endl
			 << "Maximum:\t" << s.max << endl
			 << "Minimum:\t" << s.min << endl;
	}
}
