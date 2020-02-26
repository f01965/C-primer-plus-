#include "port.h"
/*
char *brand;
char style[20];
int  bottles;
*/
Port::Port(const char *br, const char *st, int b )
{
	int len = strlen(br);
	brand = new char[len + 1];
	strcpy_s(brand, len + 1, br);
	strcpy_s(style, st);
	bottles = b;
}

Port::Port(const Port &p)
{
	int len = strlen(p.brand);
	brand = new char[len + 1];
	strcpy_s(brand, len + 1, p.brand);
	strcpy_s(style, p.style);
	bottles = p.bottles;
}
Port & Port::operator=(const Port & p)
{
	if (this == &p)
		return *this;
	delete[]brand;
	int len = strlen(p.brand);
	brand = new char[len + 1];
	strcpy_s(brand, len + 1, p.brand);
	strcpy_s(style, p.style);
	bottles = p.bottles;
	return *this;
}
Port & Port::operator+=(int b)
{
	bottles = bottles + b;
	return *this;
}
Port & Port::operator-=(int b)
{
	bottles = bottles - b;
	return *this;
}
void Port::Show() const
{
	using std::cout;
	cout << "Brand:" << brand << "\n";
	cout << "Kind:" << style << "\n";
	cout << "Bottles:" << bottles << "\n";
}
std::ostream & operator<<(std::ostream & os, const Port & p)
{
	os << p.brand << "," << p.style << "," << p.bottles;
	return os;
}

/* VintagePort
char *nickname;
int year;
*/
VintagePort::VintagePort(const char *br, int b, const char *nn, int y) :Port(br,"Vintage",b)
{
	int len = strlen(nn);
	nickname = new char[len + 1];
	strcpy_s(nickname, len + 1, nn);
	year = y;
}
VintagePort::VintagePort(const VintagePort & vp) :Port(vp)
{
	int len = strlen(vp.nickname);
	nickname = new char[len + 1];
	strcpy_s(nickname, len + 1, vp.nickname);
	year = vp.year;
}

VintagePort & VintagePort::operator = (const VintagePort & vp)
{
	if (this == &vp)
		return *this;
	delete[] nickname;
	Port::operator=(vp);
	int len = strlen(vp.nickname);
	nickname = new char[len + 1];
	strcpy_s(nickname, len + 1, vp.nickname);
	year = vp.year;
	return *this;
}
void VintagePort::Show() const
{
	using std::cout;
	Port::Show();
	cout << "nickname:" << nickname << "\n";
	cout << "year:" << year << "\n";
}
// friend funcitions
std::ostream & operator<<(std::ostream & os, const VintagePort & vp)
{
	os << (const Port &)vp;
	os << "," << vp.nickname << "," << vp.year << "\n";
	return os;
}