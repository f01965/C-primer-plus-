#include <iostream>
const int Max = 5;
// function prototype
double * fill_array(double *arr, int len);
void show_array(double *start, double *end);
void revalue(double r, double *start, double *end);

int main()
{
	using namespace std;
	double dMyArray[Max];
	double *end;
	end = fill_array(dMyArray, Max);
	show_array(dMyArray, end);
	if (end > dMyArray)
	{
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin >> factor))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; Please enter a number: ";
		}
		revalue(factor, dMyArray, end);
		show_array(dMyArray, end);
	}

	cout << "Done.\n" << endl;
	system("pause");
	return 0;
}
double * fill_array(double *arr, int len)
{
	using namespace std;
	double temp;
	int i;
	for (i = 0; i < len; i++)
	{
		cout << "ENTER:";
		cin >> temp;
		if (!cin)
		{
			cin.clear();

			while (cin.get() != '\n')
				continue;
			cout << "Bad input.\n";
			break;
		}
		else if(temp < 0)
		{
			break;
		}
		arr[i] = temp;
	}
	return arr + i - 1;
}
void show_array(double *start, double *end)
{
	using namespace std;
	double *pf;
	pf = start;
	cout << "OUTPUT:";
	while (pf <= end)
	{
		cout << *pf<< " ";
		pf++;
	}
	cout << endl;
}
void revalue(double r, double * start, double * end)
{
	double * pt;
	for (pt = start; pt <= end; ++pt)
		*pt *= r;
}