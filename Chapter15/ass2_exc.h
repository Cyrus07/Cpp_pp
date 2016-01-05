// exc_mean.h
#include <stdexcept>
#include <string>
using std::string;

class bad_hmean : public std::logic_error
{
public:
	explicit bad_hmean(const string & what_arg = "None") : logic_error(what_arg) {}
	const char * what() {return "hmean: invalid arguments: a = -b\n";}
};

class bad_gmean : public std::logic_error
{
public:
	explicit bad_gmean(const string & what_arg = "None") : logic_error(what_arg) {}
	const char * what() {return "gmean: argument should be >= 0\n";}
};
