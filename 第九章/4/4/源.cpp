#include <iostream>
#include "sales.h"

int main()
{
	using namespace SALES;
	Sales s1, s2;
	double arr[3] = {1.0,2.0,3.0};
	setSales(s1);
	showSales(s1);


	setSales(s2, arr, 3);
	showSales(s2);

	system("pause");
	return 0;
}