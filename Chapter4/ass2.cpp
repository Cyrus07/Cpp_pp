#include<iostream>
#include<string>

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	using std::string;

	string name;
	string dessert;

	cout << "Enter your name:" << endl;
	getline(cin, name);
	cout << "Enter your favorite dessert:" << endl;
	getline(cin, dessert);
	cout << "I have some delicious "<< dessert;
	cout << " for you, " << name << endl;
	return 0;
}
