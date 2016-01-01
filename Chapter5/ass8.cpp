#include<iostream>
#include<cstring>

int main()
{
	using std::cout;
	using std::endl;
	using std::cin;

	int n=0;
	char word[20];
	cout << "Enter words (to stop, type the word done):" << endl;
	cin >> word;
	while(strcmp(word, "done"))
	{
		n++;
		cin >> word;
	}
	cout << "You entered a total of " << n << " words." << endl;
	return 0;
}
