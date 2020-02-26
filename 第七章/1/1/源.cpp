#include <iostream>

double dCalc(double num1, double num2);
int main()
{
	using namespace std;
	double iNumber1, iNumber2;
	iNumber1 = 1;
	iNumber1 = 2;

	double dResult;
	while (true)
	{
		cout << "PLZ INPUT :";
		cin >> iNumber1;
		cin >> iNumber2;
		if (iNumber1 != 0 && iNumber2 != 0)
		{
			dResult = dCalc(iNumber1, iNumber2);
			cout << "CALC : " << dResult << endl;
		}
		else
		{
			cout << "INPUT  0 . EXIT." << endl;
			break;
		}
	}
	system("pause");
	return 0;

}

double dCalc(double num1, double num2)
{
	double dResult;
	dResult = 2.0 * num1 * num2 / (num1 + num2);
	return  dResult;
}