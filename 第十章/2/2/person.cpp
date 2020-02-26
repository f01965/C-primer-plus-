#include "person.h"

Person::Person(const std::string & lname, const char * fname)
{
	lname_ = lname;
	strcpy_s(fname_ , fname);
}
void Person::show() const
{
	using std::cout;
	using std::endl;
	std::string str = lname_;
	cout << "FNAME: " << fname_ << "  LNAME: " << str << endl;
}
void Person::formal_show() const
{
	using std::cout;
	using std::endl;
	cout << "FNAME: " << fname_ << "  LNAME: "<< lname_ << endl;
}