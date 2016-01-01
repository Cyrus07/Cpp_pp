#include<iostream>

void printfStr(char * pt, int n = 0);

int main()
{
	using namespace std;
	char str[20] = "Hello world!";
	printfStr(str);
	cout << endl << endl;
	for (int i = 0; i < 5; i++)
	{
		printfStr(str, i);
		cout << endl << endl;
	}
	printfStr(str);
	return 0;
}

void printfStr(char * pt, int n)
{
	using namespace std;
	static int num_print;
	num_print++;
	if (n == 0)
		cout << pt << endl;
	else
		for (int i = 0; i < num_print; i++)
			cout << pt << endl;
	return;
}
