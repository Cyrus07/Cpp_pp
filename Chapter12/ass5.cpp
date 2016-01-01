#include <iostream>
#include <cstdlib>
#include <ctime>
#include "queue.h"
const int MIN_PER_HR = 60;
bool newcustomer(double x);

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	using std::ios_base;

	std::srand(std::time(0));

	cout << "Case study: Bank of Heather Automatic Teller\n";
			int qs = 10;
			int hours = 100;
			long cyclelimit = MIN_PER_HR * hours;
	Item temp;
	long turnaways = 0;
	long customers = 0;
	long served = 0;
	long sum_line = 0;
	int wait_time = 0;
	long line_wait = 0;

	int perhour = 0;
	double min_per_cust;
	double avg_line_wait = 0;
	long sum_line_wait = 0;
	long sum_served = 0;
	while (avg_line_wait <= 1)
	{
		perhour++;
		sum_line_wait = 0;
		sum_served = 0;
		for (int i = 0; i < 100; i++)
		{
			min_per_cust = 1.0 * MIN_PER_HR / perhour;
			Queue line(qs);
			for (int cycle = 0; cycle < cyclelimit; cycle++)
			{
				if (newcustomer(min_per_cust))
					if (line.isfull())
						turnaways++;
					else
					{
						customers++;
						temp.set(cycle);
						line.enqueue(temp);
					}
				if (wait_time <= 0 && !line.isempty())
				{
					line.dequeue(temp);
					wait_time = temp.ptime();
					line_wait += cycle - temp.when();
					served++;
				}
				if (wait_time > 0)
					wait_time--;
				sum_line += line.queuecount();
			}
			line.~Queue();
			sum_line_wait += line_wait;
			sum_served += served;
		}
		avg_line_wait = 1.0 * sum_line_wait / sum_served;
	}

	cout << "Arrived customer per hour should less than " << (perhour-1) << endl;
	/*
	if (customers > 0)
	{
		cout << "customers accepted: " << customers << endl;
		cout << "  customers served: " << served << endl;
		cout << "         turnaways: " << turnaways << endl;
		cout << "average queue size: ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout << (double) sum_line / cyclelimit << endl;
		cout << " average wait time: " << (double) line_wait / served << " minutes\n";
	}
	else
		cout << "No customers!\n";
	*/
	cout << "Done!\n";
	return 0;
}

bool newcustomer(double x)
{
	return (std::rand() * x / RAND_MAX < 1);
}
