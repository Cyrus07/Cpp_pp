#include<iostream>
#include<array>

int main()
{
	using std::array;
	using std::cout;
	using std::cin;
	using std::endl;

	array<double, 10> arr;
	double sum = 0;
	int n = 0;
	while(cin>>arr[n])
	{
		sum += arr[n];
		n += 1;
	}

	double mean = sum/n;
	int m = 0;
	for (int i=0; i<n; i++)
		if (arr[i] > mean)
			m += 1;
	cout << "The mean is " << mean << endl;
	cout << m << " of them is above the mean." << endl;
	
	return 0;
}
