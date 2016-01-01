#include<iostream>

long factor(long);

int main()
{
	using namespace std;
	long n;
	cout << "Enter a number (q to quit): \n";
	while(cin >> n)
	{
		cout << factor(n) << endl;
		cout << "enter a number: \n";
	}
	return 0;
}

long factor(long n)
{
	if (n == 0)
		return 1;
	else
		return n*factor(n-1);
}
