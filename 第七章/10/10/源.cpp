#include <iostream>
using namespace std;
double calculate(double num1, double num2, double (*fun)(double, double));
double add(double x, double y);
double mul(double x, double y);
double sub(double x, double y);
int main()
{
	double num1, num2;
	double result;
	double(*pf[3])(double, double);
	pf[0] = add;
	pf[1] = mul;
	pf[2] = sub;
	while (true)
	{
		cout << "ENTER 2 numbers ( 0 = EXIT):";
		cin >> num1 >> num2;
		if (num1 == 0 || num2 == 0)
			break;
		result = calculate(num1,num2,pf[0]);
		cout << "ADD: " << result << endl;
		result = calculate(num1, num2, pf[1]);
		cout << "MUL: " << result << endl;
		result = calculate(num1, num2, pf[2]);
		cout << "SUB: " << result << endl;
	}


	system("pause");
	return 0;
}
double calculate(double num1, double num2, double (*fun)(double,double))
{
	double result;
	result = (*fun)(num1, num2);
	
	return result;
}
double add(double x, double y)
{
	return x + y;
}
double mul(double x, double y)
{
	return x * y;
}
double sub(double x, double y)
{
	if (x > y)
	{
		return x - y;
	}
	return y - x;
}