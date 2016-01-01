#include "stonewt_v2.h"
#include <iostream>

int main()
{
	using std::cout;
	using std::endl;

	Stonewt a(10, 1.1);
	Stonewt b(105.1);
	cout << "a : " << a;
	cout << "b : " << b;
	cout << "a + b = " << a + b;
	cout << "a - b = " << a - b;
	cout << "2 * a = " << 2 * a;
	cout << "a * 2 = " << a * 2;
	return 0;
}
