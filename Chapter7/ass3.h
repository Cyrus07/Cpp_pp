#ifndef _ass3_
#define _ass3_
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volumn;
};
void volumn_box(box *);
void show_box(box);
#endif
