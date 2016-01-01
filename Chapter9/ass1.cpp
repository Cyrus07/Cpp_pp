#include"golf.h"

int main()
{
	golf coer[5];
	setgolf(coer[0], "Lingchen Huang", 24);
	for (int i = 1; i < 5; i++)
		setgolf(coer[i]);
	handicap(coer[0], 12);
	for (int i = 0; i < 5; i++)
		showgolf(coer[i]);
	return 0;
}
