#include "ass7_plorg.h"

int main()
{
	Plorg a;
	Plorg b("Plorgb", 45);
	a.Show();
	b.Show();
	b.SetCI(55);
	b.Show();
	return 0;
}
