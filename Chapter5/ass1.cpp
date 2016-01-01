#include<iostream>

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	int i, j;

	cout << "Please input two integers: " << endl;
	cin >> i;
	cin.get();
	cin >> j;
	
	int n=0;
	for (int m=i;m<=j;m++)
		n+=m;
	
	cout << "The sum is " << n << "." << endl;
	return 0;
}
