#include <iostream>
using namespace std;
int  Fill_array(double *array, int len);
void Show_array(const double *array, int len);
void Reverse_array(double *array, int len);
int main()
{
	double dMyArray[10];
	int len;
	len = Fill_array(dMyArray,10);
	Show_array(dMyArray, len);
	Reverse_array(dMyArray, len);
	Show_array(dMyArray,len);

	system("pause");
	return 0;
}
int  Fill_array(double *array, int len)
{
	double element;
	int  iIndex;
	for(iIndex =0; iIndex<len ; iIndex++)
	{
		cout << "ENTER:";
		if (cin >> element)
		{
			array[iIndex] = element;
		}
		else
		{
			break;
		}
	}
	return iIndex;
}
void Show_array(const double *array, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << array[i] << "  ";
	}
	cout << endl;
}
void Reverse_array(double *array, int len)
{
	double temp;
	int   mid = len / 2;
	for (int i = 0; i < mid; i++)
	{
		temp = array[i];
		array[i] = array[len - 1 - i];
		array[len - 1 - i] = temp;
	}
}