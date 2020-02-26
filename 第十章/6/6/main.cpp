#include "move.h"
#include <iostream>

int main()
{
	Move m1;
	Move m2(2.2, 3.3);
	Move m3;

	m1.showmove();
	m2.showmove();

	m1.reset(1.0, 2.0);
	m1.showmove();

	m3 = m2.add(m1);
	m3.showmove();
	system("pause");
	return 0;
}