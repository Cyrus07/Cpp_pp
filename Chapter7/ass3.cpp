#include<cstring>
#include"ass3.h"

int main()
{
	box xbox;
	strcpy(xbox.maker, "Microsoft");
	xbox.height = 10;
	xbox.width = 30;
	xbox.length = 40;
	volumn_box(&xbox);
	show_box(xbox);
	return 0;
}
