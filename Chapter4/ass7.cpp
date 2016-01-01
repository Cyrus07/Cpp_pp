#include<iostream>

const int arsize = 20;
struct Pizza
{
	char name[arsize];
	double size;
	double weight;
};
void show(Pizza);

int main()
{
	using std::cout;
	using std::cin;

	Pizza pizza;
	cout << "Input the name of company: ";
	cin.getline(pizza.name, arsize);
	cout << "Input the size: ";
	cin >> pizza.size;
	cout << "Input the weight: ";
	cin >> pizza.weight;
	show(pizza);
	return 0;
}

void show(Pizza pizza)
{
	using std::cout;
	using std::cin;
	using std::endl;

	cout << "The company name is " << pizza.name << endl;
	cout << "The size is " << pizza.size << " inch" << endl;
	cout << "The weight is " << pizza.weight << " ounce" << endl;
}
