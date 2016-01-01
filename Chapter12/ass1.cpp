#include "cow.h"

int main()
{
	Cow boy;
	boy.ShowCow();
	Cow girl = Cow("Lily", "Movie", 11);
	girl.ShowCow();
	Cow woman = girl;
	woman.ShowCow();
	boy = girl;
	boy.ShowCow();
	return 0;
}
