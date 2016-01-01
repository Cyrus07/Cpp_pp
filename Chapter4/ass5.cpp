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
	CandyBar snack = {"Mocha Munch", 2.3, 350};
	show(snack);
}

void show(CandyBar cb)
{
	using std::cout;
	using std::endl;

	cout << "The brand is " << cb.brand << endl;
	cout << "The weight is " << cb.weight << endl;
	cout << "The calorie of the candy is " << cb.calorie << endl;
}
