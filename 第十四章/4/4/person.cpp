#include "person.h"
#include <string>
void Person::Show() const
{
	using std::cout;
	cout << "FIRSTNAME = " << firstName_ << "  LASTNAME = " << lastName_ << "\n";
}
Person::Person(const Person &p)
{
	firstName_ = p.firstName_;
	lastName_ = p.lastName_;
}
void Person::Set()
{
	std::cout << "Enter firstname: ";
	std::cin >> firstName_;
	std::cout << "Enter lastname: ";
	std::cin >> lastName_;
}
