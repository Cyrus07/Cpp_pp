#include<iostream>

double probability(unsigned int number, unsigned int picks, unsigned int special_number);

int main()
{
	using namespace std;

	int number, picks, special_number;
	cout << "Enter the number of choices on the game card, the number of picks allowed, and the number of special choices: " << endl;
	while ((cin >> number >> picks >> special_number) && (number > picks))
	{
		double prob = probability(number, picks, special_number);
		cout << "You have one chance in "
			<< prob
			<< " of winning.\n"
			<< "Next three numbers (q to quit): \n";
	}
	cout << "bye\n";
	return 0;
}
