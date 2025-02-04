#include "wine.h"
#include <string>
#include <iostream>
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	cout << "Enter name of wines:";
	char lab[50];
	cin.getline(lab, 50);
	cout << "Enter number of years:";
	int yrs;
	cin >> yrs;
	Wine holding(lab, yrs);
	holding.GetBottles();
	holding.Show();

	const int YRS = 3;
	int y[YRS] = { 1993, 1995, 1998 };
	int b[YRS] = { 48, 60, 72 };
	Wine more("Gushing Grape Red", YRS, y, b);
	more.Show();
	cout << "Total bottles for " << more.Label() << "��" << more.mysum() << endl;
	cout << "Bye\n";
	
	system("pause");
	return 0;
}