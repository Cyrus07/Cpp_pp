#include<iostream>
#include<string>
#include<cctype>

const std::string & toupperStr(std::string &);

int main()
{
	using namespace std;
	string str;
	cout << "Enter a string (q to quit): ";
	getline(cin, str);
	while (str != "q")
	{
		cout << toupperStr(str) << endl;
		cout << "Next string (q to quit): ";
		getline(cin, str);
	}
	cout << "Bye.\n";
	return 0;
}

const std::string & toupperStr(std::string & str)
{
	for (int i = 0; i < str.size(); i++)
		str[i] = toupper(str[i]);
	return str;
}

