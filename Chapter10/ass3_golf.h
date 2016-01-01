// golf.h -- for pe9-1.cpp
#ifndef GOLF_H_
#define GOLF_H_
class Golf
{
	private:
		static const int Len = 40;
		char fullname[Len];
		int handicap;
	public:
		Golf(const char * name = "", int hc = 0);
		int SetGolf();
		void Handicap(int hc);
		void Show() const;
};
#endif
