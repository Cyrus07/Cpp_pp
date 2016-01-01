#include<iostream>

struct CandyBar
{
	char brand[20];
	double weight;
	int calorie;
};

void show(CandyBar);

int main()
{
	CandyBar snack[3] = 
	{{"Mocha Munch", 2.3, 350},
	{"NN", 2.4, 360},
	{"OO", 2.5, 370}};
	int n = sizeof(snack)/sizeof(CandyBar);
	for (int i=0; i<n; i++)
		show(snack[i]);
	return 0;
}

void show(CandyBar cb)
{
	using std::cout;
	using std::endl;

	cout << "The brand is " << cb.brand << endl;
	cout << "The weight is " << cb.weight << endl;
	cout << "The calorie of the candy is " << cb.calorie << endl;
}
