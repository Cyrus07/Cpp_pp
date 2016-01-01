//string2.cpp --
#include <cstring>
#include "string2.h"
using std::cout;
using std::cin;
#include <cctype>

String::String(const char * s)
{
	len = strlen(s);
	str = new char [len + 1];
	strcpy(str, s);
}

String::String()
{
	len = 0;
	str = new char [1];
	str = '\0';
}

String::String(const String & st)
{
	len = st.len;
	str = new char [len + 1];
	strcpy(str, st.str);
}

String::~String()
{
	delete [] str;
}

String & String::operator=(const String & st)
{
	if (this == &st)
		return *this;
	len = st.len;
	delete [] str;
	str = new char [len + 1];
	strcpy(str, st.str);
	return * this;
}

String & String::operator=(const char * st)
{
	len = strlen(st);
	delete [] str;
	str = new char [len + 1];
	strcpy(str, st);
	return *this;
}

// read-write char access for non-const String
char & String::operator[](int i)
{
	return str[i];
}

// read-only char access for const String
const char & String::operator[](int i) const
{
	return str[i];
}

bool operator<(const String st1, const String st2)
{
	return (strcmp(st1.str, st2.str)<0);
}

bool operator>(const String st1, const String st2)
{
	return (strcmp(st1.str, st2.str)>0);
}

bool operator==(const String st1, const String st2)
{
	return (strcmp(st1.str, st2.str)==0);
}

ostream & operator<<(ostream & os, const String & st)
{
	os << st.str;
	return os;
}

istream & operator>>(istream & is, String & st)
{
	char temp[String::CLIMIT];
	is.get(temp, String::CLIMIT);
	if (is)
		st = temp;
	while (is && is.get()!='\n')
		continue;
	return is;
}

String operator+(const String & st1, const String & st2)
{
	int len = st1.len + st2.len;
	char * temp = new char [len + 1];
	strcat(temp, st1.str);
	strcat(temp, st2.str);
	String st = String(temp);
	delete [] temp;
	return st;
}

void String::stringlow() const
{
	int i = 0;
	while(str[i]!='\0')
	{
		str[i] = tolower(str[i]);
		i++;
	}
}

void String::stringup() const
{
	int i = 0;
	while(str[i]!='\0')
	{
		str[i] = toupper(str[i]);
		i++;
	}
}

int String::has(char c)
{
	int n = 0;
	for (int i = 0; i < len; i++)
		if (str[i] == c)
			n++;
	return n;
}
