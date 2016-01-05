// tv.h
#ifndef ASS1_TV_H_
#define ASS1_TV_H_

class Remote;

class Tv
{
public:
	friend class Remote;
	enum {Off, On};
	enum {MinVal, MaxVal = 20};
	enum {Antenna, Cable};
	enum {TV, DVD};
	enum {Normal, Interactive};

	Tv(int s = Off, int mc = 125) : state(s), volume(5),
		maxchannel(mc), channel(2), mode(Cable), input(TV) {}
	void onoff() {state = (state == On)? Off : On;}
	bool ison() const {return state == On; }
	bool volup();
	bool voldown();
	void chanup();
	void chandown();
	void set_mode() {mode = (mode == Antenna)? Cable : Antenna; }
	void set_input() {input = (input == TV)? DVD : TV; }
	void settings() const;
	void set_remote(Remote & rmt) const;
private:
	int state;
	int volume;
	int maxchannel;
	int channel;
	int mode;
	int input;
};

class Remote
{
private:
	int mode;
	int interact;
public:
	Remote(int m = Tv::TV, int i = Tv::Interactive) : mode(m), interact(i) {}
	bool volup(Tv & t) {return t.volup(); }
	bool voldown(Tv & t) {return t.voldown(); }
	void onoff(Tv & t) {return t.onoff(); }
	void chanup(Tv & t) {return t.chanup(); }
	void chandown(Tv & t) {return t.chandown(); }
	void set_chan(Tv & t, int c) {t.channel = c; }
	void set_mode(Tv & t) {t.set_mode(); }
	void set_input(Tv & t) {t.set_input(); }
	void set_interact() {interact = (interact==Tv::Normal) ? Tv::Interactive : Tv::Normal;}
	void show() const; 
};

#endif
