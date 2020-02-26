#include <iostream>

using namespace std;

int InPut(double *pf);
void OutPut(double *pf,int iSize);
void Calc(double *pf, int iSize);
int main()
{
	double  dScores[10];
	int iSize;
	iSize = InPut(dScores);
	OutPut(dScores,iSize);
	Calc(dScores, iSize);
	system("pause");
	return 0;
}
int InPut(double *pf)
{
	int iIndex = 0;
	while (iIndex < 10)
	{
		cout << "INPUT:";
		cin >> pf[iIndex];

		if (pf[iIndex] == 0)
		{
			break;
		}
		iIndex++;
	}
	return iIndex;
}
void OutPut(double *pf ,int iSize)
{
	cout << "OUTPUT:";
	for (int i = 0; i < iSize; i++)
	{
		cout << pf[i] << "  ";
	}
	cout << endl;
}
void Calc(double *pf, int iSize)
{
	double sum = 0;
	double average = 0;
	for (int i = 0; i < iSize; i++)
	{
		sum = sum + pf[i];
	}
	average = sum / iSize;
	cout << "AVERAGE:" << average << endl;
}