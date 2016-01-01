#include "ass6_move.h"

int main()
{
	Move m;
	m.showmove();
	Move n = Move(1,2);
	n.showmove();
	Move x = m.add(n);
	x.showmove();
	x.reset();
	x.showmove();
	return 0;
}
