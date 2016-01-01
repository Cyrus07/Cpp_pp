#include<iostream>

template <typename T>
T max5(T arr[5]);

int main()
{
	using namespace std;
	int arr1[5] = {1, 2, 3, 4, 5};
	double arr2[5] = {5.1, 4.1, 3.1, 2.1, 1.1};
	cout << max5(arr1) << endl;
	cout << max5(arr2) << endl;
}

template <typename T>
T max5(T arr[5])
{
	T temp = arr[0];
	for (int i = 1; i < 5; i++)
		temp = arr[i]>temp?arr[i]:temp;
	return temp;
}
