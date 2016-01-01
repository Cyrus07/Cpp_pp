#include<iostream>
#include<string>

int main()
{
	using std::cout;
	using std::endl;
	using std::cin;
	using std::string;

	int n=0;
	string word;
	cout << "Enter words (to stop, type the word done):" << endl;
	cin >> word;
	while(word != "done")
	{
		n++;
		cin >> word;
	}
	cout << "You entered a total of " << n << " words." << endl;
	return 0;
}
