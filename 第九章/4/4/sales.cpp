#include <iostream>
#include "sales.h"

void SALES::setSales(SALES::Sales & s, const double ar[], int n)
{
	int index;
	for (index = 0; index < SALES::QUARTERS; index++)
	{
		if (index < n)
		{
			s.sales[index] = ar[index];
		}
		else
		{
			s.sales[index] = 0.0;
		}
	}
	double sum = s.sales[0];
	double max = s.sales[0], min = s.sales[0];
	for (int i = 1; i < index; i++)
	{
		if (max < s.sales[i])
		{
			max = s.sales[i];
		}
		if (min > s.sales[i])
		{
			min = s.sales[i];
		}
		sum += s.sales[i];
	}
	s.average = sum / index;
	s.max = max;
	s.min = min;
}
void SALES::setSales(SALES::Sales & s)
{
	using std::cout;
	using std::cin;
	using std::endl;
	cout << "Enter sales:" << endl;
	int index;
	for (index = 0; index < QUARTERS; index++)
	{
		cout << "sales[" << index << "]: ";
		cin >> s.sales[index];
	}
	double sum = s.sales[0];
	double max = s.sales[0], min = s.sales[0];
	for (int i = 1; i < index; i++)
	{
		if (max < s.sales[i])
		{
			max = s.sales[i];
		}
		if (min > s.sales[i])
		{
			min = s.sales[i];
		}
		sum += s.sales[i];
	}
	s.average = sum / index;
	s.max = max;
	s.min = min;
}

void SALES::showSales(const SALES::Sales & s)
{
	using std::cout;
	using std::cin;
	using std::endl;
	// show sales
	cout << "sales: ";
	for (int i = 0; i < SALES::QUARTERS; ++i)
		cout << s.sales[i] << " ";
	cout << endl;

	// show average
	cout << "average: " << s.average << endl;

	// show max and min
	cout << "max: " << s.max << endl;
	cout << "min: " << s.min << endl;
}