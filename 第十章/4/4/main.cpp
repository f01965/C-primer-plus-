#include "sales.h"
#include <iostream>
int main()
{
	using namespace SALES;
	Sales s1;
	s1.setSales();
	s1.showSales();

	std::cout << "NEXT .... " << std::endl;
	double arr[3] = { 1.0,2.0,3.0 };
	Sales s2 = Sales(arr, 3);
	s2.showSales();
	system("pause");
	return 0;
}