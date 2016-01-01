#ifndef PLORG_H_
#define PLORG_H_

class Plorg
{
private:
	char fullname[20];
	int CI;
public:
	Plorg(const char * name = "Plorga", int ci = 50);
	void SetCI(int ci);
	void Show() const;
};

#endif
