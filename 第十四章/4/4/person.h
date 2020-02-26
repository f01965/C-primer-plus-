#ifndef PERSON_H_
#define PERSON_H_
#include <iostream>

class Person
{
private:
	std::string firstName_;
	std::string lastName_;
public:
	Person() :firstName_("none"), lastName_("none"){}
	Person(const std::string fn, const std::string ln) :firstName_(fn), lastName_(ln){}
	Person(const Person &p);
	virtual ~Person(){}
	virtual void Show() const;
	virtual void Set();
};
#endif