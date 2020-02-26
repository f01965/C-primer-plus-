#include "cow.h"
#include <iostream>

Cow::Cow()
{
	name[0] = '\0';
	hobby = nullptr;
	weight = 0.0;
}
Cow::Cow(const char *num, const char *ho, double wt)
{
	strcpy_s(name, num);
	int len = strlen(ho);
	hobby = new char[len+1];
	strcpy_s(hobby,len+1, ho);
	weight = wt;
}
Cow::Cow(const Cow &c)
{
	strcpy_s(name, c.name);
	int len = strlen(c.hobby);
	hobby = new char[len + 1];
 	strcpy_s(hobby, len+1,c.hobby);
	weight = c.weight;
}
Cow::~Cow()
{
	delete[] hobby;
}
Cow & Cow::operator=(const Cow &c)
{
	strcpy_s(name, c.name);
	delete[] hobby;
	int len = strlen(c.hobby);
	hobby = new char[len + 1];
	strcpy_s(hobby, len+1, c.hobby);
	weight = c.weight;
	return *this;
}
void Cow::ShowCow() const
{
	std::cout<< "NAME = " << name << "  HOBBY=" << hobby << "  WEIGHT=" << weight << std::endl;
}