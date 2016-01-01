#include "ass4_bop.h"

int main()
{
	Port ga("Gallo", "tawny", 20);
	ga.Show();
	ga += 10;
	ga.Show();
	ga -= 45;
	ga.Show();
	cout << ga;

	VintagePort ll("Dynasty", "ruby", 10, "wc", 2000);
	ll.Show();
	ll += 20;
	ll.Show();
	VintagePort la = ll;
	la.Show();
	cout << la;

	return 0;
}
