#include"ass3.h"
#include<iostream>

void show_box(box b)
{
	using namespace std;
	cout << "The maker of box: " << b.maker << endl
		<< "the height: " << b.height << endl
		<< "the width: " << b.width << endl
		<< "the length: " << b.length << endl
		<< "the volumn: " << b.volumn << endl;
}
