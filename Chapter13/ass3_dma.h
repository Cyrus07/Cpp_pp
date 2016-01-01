// dma.h -- inheritance and dynamic memory allocation

#ifndef DMA_H_
#define DMA_H_
#include <iostream>

// ABC DMA
class abcDMA
{
private:
	char * label;
	int rating;
public:
	abcDMA(const char * l = nullptr, int r = 0);
	abcDMA(const abcDMA & rs);
	virtual ~abcDMA() = 0;
	virtual abcDMA & operator=(const abcDMA & as);
	friend std::ostream & operator<<(std::ostream & os, const abcDMA & as);
};

// base class using DMA
class baseDMA : public abcDMA
{
public:
	baseDMA(const char * l = nullptr, int r = 0)
		: abcDMA(l, r) {};
	baseDMA(const baseDMA & rs) : abcDMA(rs) {};
	virtual ~baseDMA() {};
	virtual baseDMA & operator=(const baseDMA & rs);
//	friend std::ostream & operator<<(std::ostream & os, const baseDMA & rs);
};

// derived class without DMA
// no destructor needed
// uses implicit copy constructor
// uses implicit assignment operator
class lacksDMA : public abcDMA
{
private:
	enum {COL_LEN = 40};
	char color[COL_LEN];
public:
	lacksDMA(const char * c = nullptr, const char * l = nullptr,
			int r = 0);
	lacksDMA(const char * c, const baseDMA & rs);
	virtual ~lacksDMA() {};
	friend std::ostream & operator<<(std::ostream & os, const lacksDMA & rs);
};

//derived class with DMA
class hasDMA : public abcDMA
{
private:
	char * style;
public:
	hasDMA(const char * s = nullptr, const char * l = nullptr, int r = 0);
	hasDMA(const char * s, const baseDMA & rs);
	hasDMA(const hasDMA & rs);
	virtual ~hasDMA();
	virtual hasDMA & operator=(const hasDMA & rs);
	friend std::ostream & operator<<(std::ostream & os, const hasDMA & rs);
};

#endif
