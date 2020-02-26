#include "plorg.h"
#include <iostream>

int main()
{
	plorg p1;
	plorg p2 = {"f01965",7};

	p1.show();
	p2.show();

	p1.setCI(9);
	p1.show();
	system("pause");
	return 0;
}