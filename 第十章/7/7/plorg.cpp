#include "plorg.h"
#include <iostream>
plorg::plorg(const char *name, int ci)
{
	strcpy_s(name_, name);
	ci_ = ci;
}
void plorg::setCI(int ci)
{
	ci_ = ci;
}
void plorg::show()const
{
	std::cout << name_ << "  " << ci_ << std::endl;
}