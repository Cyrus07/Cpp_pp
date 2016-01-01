// ass5_emp.h

#include <iostream>
#include <string>

class abstr_emp
{
private:
	std::string fname;
	std::string lname;
	std::string job;
public:
	abstr_emp();
	abstr_emp(const std::string & fn, const std::string & ln,
			const std::string & j);
	virtual void ShowAll() const;
	virtual void SetAll();
	virtual ~abstr_emp() = 0;
	friend std::ostream & operator<<(std::ostream & os, const abstr_emp & a);
};

class employee : public abstr_emp
{
public:
	employee();
	employee(const std::string & fn, const std::string & ln,
			const std::string & j);
	virtual void ShowAll() const;
	virtual void SetAll();
	friend std::ostream & operator<<(std::ostream & os, const employee & e);
};

class manager : virtual public abstr_emp
{
private:
	int inchargeof;
protected:
	int InChargeOf() const {return inchargeof; }
	int & InChargeOf() {return inchargeof; }
public:
	manager();
	manager(const std::string & fn, const std::string & ln,
			const std::string & j, int ico = 0);
	manager(const abstr_emp & a, int ico);
	manager(const manager & m);
	virtual void ShowAll() const;
	virtual void SetAll();
	friend std::ostream & operator<<(std::ostream & os, const manager & m);
};

class fink : virtual public abstr_emp
{
private:
	std::string reportsto;
protected:
	const std::string ReportsTo() const {return reportsto; }
	std::string & ReportsTo() {return reportsto; }
public:
	fink();
	fink(const std::string & fn, const std::string & ln,
			const std::string & j, const std::string & rpo);
	fink(const abstr_emp & a, const std::string & rpo);
	fink(const fink & f);
	virtual void ShowAll() const;
	virtual void SetAll();
	friend std::ostream & operator<<(std::ostream & os, const fink & f);
};

class highfink : public manager, public fink
{
public:
	highfink();
	highfink(const std::string & fn, const std::string & ln,
			const std::string & j, const std::string & rpo,
			int ico);
	highfink(const fink & e, int ico);
	highfink(const manager & m, const std::string & rpo);
	highfink(const highfink & f);
	virtual void ShowAll() const;
	virtual void SetAll();
};
