#include <iostream>

double Calc(double number);
int main()
{
	using namespace std;
	double dInput;
	double dResult;
	while (true)
	{
		cout << "ENTER (0 = EXIT):";
		cin >> dInput;
		if (dInput == 0)
		{
			cout << "EXIT.." << endl;
			break;
		}
		dResult = Calc(dInput);
		cout << "CALC:" << dResult << endl;
	}
	

	system("pause");
	return 0;
}
double Calc(double number)
{
	double result = 1;
	for(double i = 1;i<=number ;i++)
	{
		result = result * i;
	}
	return result;
}