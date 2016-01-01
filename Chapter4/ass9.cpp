#include<iostream>
#include<cstring>

struct CandyBar
{
	char brand[20];
	double weight;
	int calorie;
};

void show(CandyBar);

int main()
{
	using std::cout;
	using std::endl;
	CandyBar * snack = new CandyBar[3];
	strcpy(snack[0].brand, "Mocha Munch");
	snack[0].weight = 2.3;
	snack[0].calorie = 350;

	strcpy(snack[1].brand, "NN");
	snack[1].weight = 2.4;
	snack[1].calorie = 360;
	
	strcpy(snack[2].brand, "OO");
	snack[2].weight = 2.5;
	snack[2].calorie = 370;

	for (int i=0; i<3; i++)
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
