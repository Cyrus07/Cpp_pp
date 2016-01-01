#include<iostream>
#include<cstring> // strlen()


template <typename T>
T maxn(T [], int n);

template <> char * maxn<char *>(char *str[], int n);

int main()
{
	using namespace std;
	int arr1[6] = {1, 2, 3, 4, 5, 6};
	double arr2[4] = {4.1, 3.1, 2.1, 1.1};
	const char *arr3[5] = {"a", "ab", "abc", "abcd", "abcde"};
	cout << maxn(arr1, 6) << endl;
	cout << maxn(arr2, 4) << endl;
	for (int i = 0; i < 5; i++)
		cout << (int*)arr3[i] << endl;
	cout << (int*)maxn(arr3, 5) << endl;
	cout << maxn(arr3, 5) << endl;
	return 0;
}

template <typename T>
T maxn(T arr[], int n)
{
	T temp = arr[0];
	for (int i = 1; i < n; i++)
		temp = arr[i]>temp?arr[i]:temp;
	return temp;
}

template <> char * maxn(char *str[], int n)
{
	int len = strlen(str[0]);
	int i, m = 0;
	for (i = 1; i < n; i++)
		if (strlen(str[i]) > len)
		{
			len = strlen(str[i]);
			m = i;
		}
	return str[m];
}
