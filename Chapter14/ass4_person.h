// ass4_person.h
#ifndef ASS4_PERSON_H_
#define ASS4_PERSON_H_

#include <string>
class Person
{
private:
	std::string lname;
	std::string fname;
public:
	Person(const std::string & l = "none", const std::string & f = "none") : lname(l), fname(f) {}
	virtual ~Person() = 0;
	virtual void Data() const;
	virtual void Show() const;
};

class Gunslinger : virtual public Person
{
private:
	int gungrid;
	double drawtime;
public:
	Gunslinger(const std::string & l = "none", const std::string & f = "none", int gg = 20, double d = 0.5) : Person(l, f), gungrid(gg), drawtime(d) {}
	double Draw() const;
	virtual void Data() const;
	virtual void Show() const;
};

class PokerPlayer : virtual public Person
{
private:
	int draw;
public:
	PokerPlayer(const std::string & l = "none", const std::string & f = "none");
	int Draw() const;
	void Data() const;
	void Show() const;
};

class BadDude : public Gunslinger, public PokerPlayer
{
public:
	BadDude(const std::string & l = "none", const std::string & f = "none", int gg = 20, double d = 0.5) : Person(l, f), Gunslinger(l, f, gg, d), PokerPlayer(l, f) {}
	double Gdraw() const;
	int Cdraw() const;
	void Data() const {}
	void Show() const;
};

#endif
