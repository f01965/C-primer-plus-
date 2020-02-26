#include "golf.h"
#include <iostream>
golf::golf()
{
	strcpy_s(fullname_, "Noname");
	handicap_ = 0;
}
golf::golf(const char * name, int hc)
{
	strcpy_s(fullname_, name);
	handicap_ = hc;
}
void golf::handicap(int hc)
{
	handicap_ = hc;
}
void golf::showgolf()
{
	std::cout << fullname_ << "   " << handicap_ << std::endl;
}
const golf & golf::setgolf(const golf & g)
{
	strcpy_s(this->fullname_ , g.fullname_);
	this->handicap_ = g.handicap_;
	return *this;
}