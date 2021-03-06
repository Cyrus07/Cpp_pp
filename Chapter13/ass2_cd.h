#ifndef CD_H_
#define CD_H_

class Cd
{
private:
	char * performers;
	char * label;
	int selections;
	double playtime;
public:
	Cd(const char * s1, const char * s2, int n, double x);
	Cd(const Cd & d);
	Cd();
	virtual ~Cd();
	virtual void Report() const;
	Cd & operator=(const Cd & d);
};

class Classic : public Cd
{
private:
	char * works;
public:
	Classic(const char * s0, const char * s1, const char * s2, int n, double x);
	Classic(const char * s0, const Cd & d);
	Classic(const Classic & c);
	Classic();
	~Classic();
	void Report() const;
	Classic & operator=(const Classic & c);
};

#endif
