#include<iostream>

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	int n;
	cout << "Enter number of rows:";
	cin >> n;

	for (int i=1; i<=n;i++)
	{
		for (int j=n; j>i; j--)
			cout << '.';
		for (int j=i; j>0; j--)
			cout << '*';
		cout << endl;
	}
}
