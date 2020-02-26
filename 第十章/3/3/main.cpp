#include "golf.h"
#include <iostream>
const int SIZE = 5;
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	golf myGF[SIZE] = {
		{"peijie",1000},
		{"zhangdh",2000},
		{},
		{},
		{}
	};
	myGF[4].setgolf(myGF[0]);
	myGF[4].handicap(3000);
	int indexShow;
	for (indexShow = 0; indexShow < SIZE; indexShow++)
	{
		myGF[indexShow].showgolf();
	}
	system("pause");
	return 0;
}