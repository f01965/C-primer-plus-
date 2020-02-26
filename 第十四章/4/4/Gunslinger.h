#ifndef GUNSLINGER_H_
#define GUNSLINGER_H_
#include "person.h"
#include <iostream>
class Gunslinger :virtual public Person
{
private:
	double drawTime_;
	int    glCount_;
public:
	Gunslinger(int glc = 0, double dt = 0.0) :drawTime_(dt), glCount_(glc), Person("Gunslinger","Gunslinger"){}
	Gunslinger(int glc, double dt, const char *fl, const char *ln):drawTime_(dt), glCount_(glc), Person(fl, ln){}
	~Gunslinger(){}
	double Draw() const{ return drawTime_; }
	void Show() const;
	void Set();
};
#endif