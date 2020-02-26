#include <iostream>
#include <array>
#include <cstdlib>
const int SIZE = 10;
int main()
{
	using namespace std;
	array<double, SIZE> dArray;
	cout << "Input :";
	double dSum, dAverage,dUserIn;
	int iIndex, iSum;
	dSum = 0;
	dAverage = 0;
	iIndex = 0;
	iSum = 0;
	for (int i = 0; (i < SIZE) && (cin >> dUserIn); i++) {
		dArray[i] = dUserIn;
		dSum += dArray[i];
		iIndex = i;
	}
	dAverage = dSum /(float)(iIndex + 1);
	
	cout << "Sum = " << dSum << endl;
	cout.precision(2);
	cout << "Average = " << dAverage << endl;
	for (int j = 0; j < iIndex+1; j++) {
		if (dArray[j] > dAverage) {
			cout << "> Average = " << dArray[j] << "  " << endl;
		}
	}
	
	
	system("pause");

	return 0;
}