#include<iostream>
#include<cctype>

int main()
{
	using std::cout;
	using std::cin;

	char ch;
	cin >> ch;
	while(ch != '@')
	{
		if (isalpha(ch))
			if (islower(ch))
				cout << char(toupper(ch));
			else if (isupper(ch))
				cout << char(tolower(ch));
		cin >> ch;
	}
	cout << '\n';
	return 0;
}
