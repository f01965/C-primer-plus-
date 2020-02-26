#include <iostream>

const double RATE1 = 0.1;
const double RATE2 = 0.15;
const double RATE3 = 0.2;

int main()
{
	using namespace std;
	double lNumber;
	double lTvarp;
	cout << "Enter u number:";
	cin >> lNumber;
	lTvarp = 0;
	while (true)
	{
		if (lNumber < 0)
		{
			exit(EXIT_FAILURE);;
		}
		else if (lNumber <= 5000 && lNumber >0)
		{
			lTvarp = 0;		
		}
		else if (lNumber >= 5001 && lNumber <= 15000)
		{
			lTvarp = (lNumber - 5000)*RATE1;
		}
		else if (lNumber >= 15001 && lNumber <= 35000)
		{
			lTvarp = (15000 - 5000)*RATE1 + (lNumber - 15000)*RATE2;
		}
		else if(lNumber >= 35001)
		{
			lTvarp = (15000 - 5000)*RATE1 + (35000 - 15000)*RATE2 + (lNumber - 35000)*RATE3;
		}
		else
		{
			exit(EXIT_FAILURE);
		}
		cout << "Tvarp : " << lTvarp << endl;
		cout << "Input :" ;
		lNumber = 0;
		cin >> lNumber;
	}
	cout << "exit.." << endl;
	return 0;
}