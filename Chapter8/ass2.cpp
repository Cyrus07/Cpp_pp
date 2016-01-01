#include<iostream>
#include<string>

struct CandyBar
{
	std::string name;
	double weight;
	int calorie;
};

const CandyBar & setCandyBar(CandyBar & candy, const char * name = "Millenniem Munch", double weight = 2.85, int calorie = 350);
void showCandyBar(const CandyBar &);

int main()
{
	using namespace std;
	char name[30];
	double weight;
	int calorie;
	CandyBar c1, c2;
	cout << "Enter the candy name: ";
	cin.getline(name, 30);
	cout << "Enter the weight: ";
	cin >> weight;
	cout << "Enter the calorie: ";
	cin >> calorie;
	showCandyBar(setCandyBar(c1));
	showCandyBar(setCandyBar(c2, name, weight, calorie));
	return 0;
}

const CandyBar & setCandyBar(CandyBar & candy, const char * name, double weight, int calorie)
{
	candy.name = name;
	candy.weight = weight;
	candy.calorie = calorie;
	return candy;
}

void showCandyBar(const CandyBar & candy)
{
	using namespace std;
	cout << "Candy info:\nName:\t" << candy.name << endl
		 << "Weight:\t" << candy.weight << endl
		 << "Calorie:\t" << candy.calorie << endl;
}
