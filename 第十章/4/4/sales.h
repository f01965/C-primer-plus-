#pragma once
#ifndef SALES_H_
#define SALES_H_
const int QUARTERS = 4;
namespace SALES
{
	class Sales
	{
	private:
		double sales_[QUARTERS];
		double average_;
		double max_;
		double min_;
	public:
		Sales(const double ar[], int n);
		Sales();
		void setSales();
		void showSales();
	};
}
#endif // !SALES_H_
