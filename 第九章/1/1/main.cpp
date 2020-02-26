#include <iostream>
#include "golf.h"

const int SIZE = 5;
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	golf myGF[SIZE];
	int  index;
	int  result = 0;
	for (index = 0; index < SIZE; index++)
	{
		cout << "golf[" << index << "]" << endl;
		result = setgolf(myGF[index]);
		if (result != 1)
		{
			cout << "Error" << endl;
			break;
		}
	}
	int indexShow ;
	for (indexShow = 0; indexShow < index; indexShow++)
	{
		showgolf(myGF[indexShow]);
	}
	system("pause");
	return 0;
}