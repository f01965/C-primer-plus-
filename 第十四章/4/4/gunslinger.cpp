#include "person.h"
#include "Gunslinger.h"
#include <iostream>
void Gunslinger::Show() const
{
	using std::cout;
	Person::Show();
	cout << "DRAWTIME = " << drawTime_ << "  COUNT = " << glCount_ << "\n";
}

void Gunslinger::Set()
{
	Person::Set();
	std::cout << "Enter Drawtime: ";
	std::cin >> drawTime_;
	std::cout << "Enter Notches: ";
	std::cin >> glCount_;
}
