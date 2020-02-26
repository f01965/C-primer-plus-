#include "cd.h"
#include <iostream>

Cd::Cd(char *s1, char *s2, int n, double x)
{
	strcpy_s(performers,s1);
	strcpy_s(label, s2);
	selections = n;
	playtime = x;
}
Cd::Cd(const Cd &d)
{
	strcpy_s(performers, d.performers);
	strcpy_s(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}
Cd::Cd()
{
	performers[0] = '\0';
	label[0] = '\0';
	selections = 0;
	playtime = 0.0;
}
Cd::~Cd()
{}
void Cd::Report() const
{
	using std::cout;
	cout << "PERFORMERS = " << performers<<"\n";
	cout << "LABEL = " << label << "\n";
	cout << "SELECTIONS = " << selections << "\n";
	cout << "PLAYTIME = " << playtime << "\n";
}
Cd & Cd::operator=(const Cd &d)
{
	if (this == &d)
		return *this;
	strcpy_s(performers, d.performers);
	strcpy_s(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

// Classic
Classic::Classic(const char *s, char *s1, char *s2, int n, double x) :Cd(s1,s2,n,x)
{
	int len = strlen(s);
	str = new char[len + 1];
	strcpy_s(str, len + 1, s);
}
Classic::Classic(const char *s, const Cd &cd) :Cd(cd)
{
	int len = strlen(s);
	str = new char[len + 1];
	strcpy_s(str, len + 1, s);
}
Classic::Classic(const Classic &cl) : Cd(cl)
{
	int len = strlen(cl.str);
	str = new char[len + 1];
	strcpy_s(str, len + 1, cl.str);
}
Classic::Classic()
{
	str = nullptr;
	Cd::Cd();
}
Classic::~Classic()
{
	delete[] str;
}
void Classic::Report() const
{
	using std::cout;
	cout << "\n++++++++ CLASSIC REPORT ++++++++ \n";
	Cd::Report();
	cout << "STR = " << str <<"\n";
}
Classic & Classic::operator=(const Classic &cl)
{
	if (this == &cl)
		return *this;
	Cd::operator=(cl);
	delete[] str;
	int len = strlen(cl.str);
	str = new char[len + 1];
	strcpy_s(str, len + 1, cl.str);
}