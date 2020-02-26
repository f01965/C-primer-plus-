#include "dma.h"
/*
char * label;
int rating;
*/
ABC::ABC(const char *l, int r)
{
	int len = strlen(l);
	label = new char[len + 1];
	strcpy_s(label, len + 1, l);
	rating = r;
}
ABC::ABC(const ABC & a)
{
	int len = strlen(a.label);
	label = new char[len + 1];
	strcpy_s(label, len + 1, a.label);
	rating = a.rating;
}
ABC::~ABC()
{
	delete[] label;
}
void ABC::View() const
{
	using std::cout;
	cout << "\n++++ ABC ++++\n";
	cout << "LABEL: " << label << "\n";
	cout << "RATING: " << rating << "\n";
}
ABC & ABC::operator = (const ABC & a)
{
	if (this == &a)
		return *this;
	delete[] label;
	int len = strlen(a.label);
	label = new char[len + 1];
	strcpy_s(label, len + 1, a.label);
	rating = a.rating;
	return *this;
}
std::ostream & operator<<(std::ostream & os, const ABC & a)
{
	os << "LABEL: " << a.label << "\n";
	os << "RATING: " << a.rating << "\n";
	return os;
}

// baseDMA
baseDMA::baseDMA(const char * l, int r) :ABC(l,r)
{}
baseDMA::~baseDMA()
{}
void baseDMA::View() const
{
	using std::cout;
	cout << "\n++++ baseDMA ++++\n";
	ABC::View();
}
std::ostream & operator<<(std::ostream & os, const baseDMA & rs)
{
	os << (const ABC &)rs;
	return os;
}
// lacksDMA
// 	char color[COL_LEN];
lacksDMA::lacksDMA(const char *c, const char *l, int r) :ABC(l,r)
{
	strcpy_s(color, c);
}
lacksDMA::lacksDMA(const char * c, const ABC & a) : ABC(a)
{
	strcpy_s(color, c);
}
lacksDMA::~lacksDMA()
{}
void lacksDMA::View() const
{
	using std::cout;
	cout << "\n++++ LacksDMA ++++\n";
	ABC::View();
	cout << "COLOR: " << color << "\n";

}
std::ostream & operator<<(std::ostream & os, const lacksDMA & rs)
{
	os << (const ABC &)rs;
	os << "COLOR: " << rs.color << "\n";
	return os;
}

// hasDMA
// 	char * style;
hasDMA::hasDMA(const char * s, const char * l, int r) :ABC(l,r)
{
	int len = strlen(s);
	style = new char[len + 1];
	strcpy_s(style, len + 1, s);
}
hasDMA::hasDMA(const char * s, const ABC & c) :ABC(c)
{
	int len = strlen(s);
	style = new char[len + 1];
	strcpy_s(style, len + 1, s);
}
hasDMA::hasDMA(const hasDMA & hs) :ABC(hs)
{
	int len = strlen(hs.style);
	style = new char[len + 1];
	strcpy_s(style, len + 1, hs.style);
}
hasDMA::~hasDMA()
{
	delete[]style;
}
void hasDMA::View() const
{
	using std::cout;
	cout << "\n++++ hasDMA ++++\n";
	ABC::View();
	cout << "STYLE: " << style << "\n";

}
hasDMA & hasDMA::operator=(const hasDMA & rs)
{
	if (this == &rs)
		return *this;
	delete[] style;
	ABC::operator=(rs);
	int len = strlen(rs.style);
	style = new char[len + 1];
	strcpy_s(style, len + 1, rs.style);
	return *this;
}
std::ostream & operator<<(std::ostream & os, const hasDMA & rs)
{
	os << (const ABC &)rs;
	os << "STYLE: " << rs.style << "\n";
	return os;
}