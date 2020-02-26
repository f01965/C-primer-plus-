#include "string2.h"
#include <cstring>
using std::cin;
using std::cout;

int String::num_strings = 0;

int String::HowMany()
{
	return num_strings;
}
String::String()
{
	len = 4;
	str = nullptr;
	num_strings++;
}
String::String(const char *s)
{
	len = strlen(s);
	str = new char[len+1];
	strcpy_s(str, len+1, s);
	num_strings++;
}
String::String(const String &st)
{
	num_strings++;
	len = st.len;
	str = new char[len + 1];
	strcpy_s(str, len+1, st.str);
}
String::~String()
{
	num_strings--;
	delete[] str;
}
void String::stringlow()
{
	char temp;
	for (int i = 0; i < len; i++)
	{
		if (isupper(str[i]))
		{
			temp = tolower(str[i]);
			str[i] = temp;
		}
	}
}
void String::stringup()
{
	char temp;
	for (int i = 0; i < len; i++)
	{
		if (islower(str[i]))
		{
			temp = toupper(str[i]);
			str[i] = temp;
		}
	}
}
int String::has(char ch) const
{
	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		if (str[i] == ch)
		{
			sum++;
		}
	}
	return sum;
}
// overload operator methods
String & String::operator=(const String & st)
{
	if (this == &st)
		return *this;
	delete [] str;
	len = st.len;
	str = new char[len + 1];
	strcpy_s(str, len+1,st.str);
	return *this;
}
String & String::operator=(const char * s)
{
	delete[] str;
	len = strlen(s);
	str = new char[len + 1];
	strcpy_s(str, len+1, s);
	return *this;
}
char & String::operator[](int i)
{
	return str[i];
}
const char & String::operator[](int i) const
{
	return str[i];
}
bool operator<(const String &st1, const String &st2)
{
	return (strcmp(st1.str, st2.str) < 0);
}
bool operator>(const String &st1, const String &st2)
{
	return st2 < st1;
}
bool operator==(const String &st1, const String &st2)
{
	return (strcmp(st1.str, st2.str) == 0);
}

ostream & operator<<(ostream & os, const String & st)
{
	os << st.str;
	return os;
}
istream & operator>>(istream & is, String & st)
{
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if (is)
		st = temp;
	while (is && is.get() != '\n')
		continue;
	return is;
}
String String::operator + (const String & s) const
{
	int len;
	char *sum;
	len = strlen(str) + strlen(s.str);
	cout << "LEN="<<strlen(str) << std::endl;
	sum = new char[len + 1];
	strcpy_s(sum,len,str);
	strcat_s(sum, len+1,s.str);
	String st_new = sum;
	return st_new;
}
String String::operator + (const char * s) const
{
	String temp = s;
	String sum = *this + temp;
	return sum;
}
String operator + (const char * st1, const String & st2)
{
	return st2 + st1;
}