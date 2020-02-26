#include <iostream>
#include "golf.h"

void setgolf(golf & g, const char * name, int hc)
{
	strcpy_s(g.fullname,name);
	g.handicap = hc;
}
int  setgolf(golf & g)
{
	std::cout << "Enter Name :";
	std::cin.getline(g.fullname,Len);
	if (g.fullname[0])
	{
		std::cout << "Enter handicap: ";
		std::cin >> g.handicap;
		while (std::cin.get() != '\n')
		{
			std::cin.get();
		}
		return 1;
	}

	return 0;
}

void handicap(golf & g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf & g)
{
	std::cout << "FullName : " << g.fullname << " HandIcap ;" << g.handicap << std::endl;
}