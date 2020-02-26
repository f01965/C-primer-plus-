#include "sales.h"
#include <iostream>
namespace SALES
{
	Sales::Sales()
	{
		for (int i = 0; i < QUARTERS; ++i)
			sales_[i] = 0.0;
		average_ = 0.0;
		max_ = 0.0;
		min_ = 0.0;
	}
	Sales::Sales(const double ar[], int n)
	{
		int index;
		for (index = 0; index < QUARTERS; index++)
		{
			if (index < n)
			{
				sales_[index] = ar[index];
			}
			else
			{
				sales_[index] = 0.0;
			}
		}
		double sum = sales_[0];
		double max = sales_[0], min = sales_[0];
		for (int i = 1; i < n; i++)
		{
			if (max < sales_[i])
			{
				max = sales_[i];
			}
			if (min > sales_[i])
			{
				min = sales_[i];
			}
			sum += sales_[i];
		}
		average_ = sum / index;
		max_ = max;
		min_ = min;
	}
	void Sales::setSales()
	{
		using std::cout;
		using std::cin;
		using std::endl;
		cout << "Call setSales Enter sales:" << endl;
		int index;
		for (index = 0; index < QUARTERS; index++)
		{
			cout << "sales[" << index << "]: ";
			cin >> sales_[index];
		}
		double sum = sales_[0];
		double max = sales_[0], min = sales_[0];
		for (int i = 1; i < index; i++)
		{
			if (max < sales_[i])
			{
				max = sales_[i];
			}
			if (min > sales_[i])
			{
				min = sales_[i];
			}
			sum += sales_[i];
		}
		average_ = sum / index;
		max_ = max;
		min_ = min;
	}
	void Sales::showSales()
	{
		using std::cout;
		using std::cin;
		using std::endl;
		// show sales
		cout << "sales: ";
		for (int i = 0; i < QUARTERS; ++i)
			cout << sales_[i] << " ";
		cout << endl;

		// show average
		cout << "average: " << average_ << endl;

		// show max and min
		cout << "max: " << max_ << endl;
		cout << "min: " << min_ << endl;
	}
}