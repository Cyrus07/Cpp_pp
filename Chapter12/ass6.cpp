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
	int wait_time1 = 0;
	int wait_time2 = 0;
	long line_wait1 = 0;
	long line_wait2 = 0;

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
		for (int i = 0; i < 10; i++)
		{
			min_per_cust = 1.0 * MIN_PER_HR / perhour;
			Queue line1(qs);
			Queue line2(qs);
			for (int cycle = 0; cycle < cyclelimit; cycle++)
			{
				if (newcustomer(min_per_cust))
					if (line1.isfull() && line2.isfull())
						turnaways++;
					else
					{
						customers++;
						temp.set(cycle);
						if (line1.queuecount() <= line2.queuecount())
							line1.enqueue(temp);
						else
							line2.enqueue(temp);
					}
				if (wait_time1 <= 0 && !line1.isempty())
				{
					line1.dequeue(temp);
					wait_time1 = temp.ptime();
					line_wait1 += cycle - temp.when();
					served++;
				}
				if (wait_time1 > 0)
					wait_time1--;
				if (wait_time2 <= 0 && !line2.isempty())
				{
					line2.dequeue(temp);
					wait_time2 = temp.ptime();
					line_wait2 += cycle - temp.when();
					served++;
				}
				if (wait_time2 > 0)
					wait_time2--;
			}
			line1.~Queue();
			line2.~Queue();
			sum_line_wait += line_wait1 + line_wait2;
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
