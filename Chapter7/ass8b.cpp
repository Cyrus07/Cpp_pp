#include<iostream>

const int Seasons = 4;
const char * Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};
struct arr_struct
{
	double arr[Seasons];
};

void fill(arr_struct *);
void show(arr_struct);

int main()
{
	arr_struct expenses;
	fill(&expenses);
	show(expenses);
	return 0;
}

void fill(arr_struct * expenses)
{
	using namespace std;
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> expenses->arr[i];
	}
}

void show(arr_struct expenses)
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << expenses.arr[i] << endl;
		total += expenses.arr[i];
	}
	cout << "Total Expenses: $" << total << endl;
}
