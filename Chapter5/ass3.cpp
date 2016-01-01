#include<iostream>

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	int i, sum=0;
	
	cout << "Please input an integer. Input 0 to quit." << endl;
	cin >> i;
	while (i)
	{
		sum+=i;
		cout << "the sum is " << sum << endl;
		cin >> i;
	}
	return 0;
}
