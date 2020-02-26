#include <iostream>

long double probability(unsigned total, unsigned choices);
int main()
{
	using namespace std;
	double total, choices;
	cout << "ENTER:";

	while ((cin >> total >> choices) && choices < total) 
	{
		cout << "WIN:" << probability(total, choices) << endl;
		cout << "ENTER: q EXIT:" ;
	}
	cout << "bye" << endl;
	system("pause");
	return 0;
}
long double probability(unsigned total, unsigned choices)
{
	long double ldResult = 1.0;
	long double n;
	unsigned  unIndex;
	for (n = total, unIndex = choices; unIndex > 0; unIndex--, n--)
	{
		ldResult = ldResult * n / unIndex;
	}
	ldResult = ldResult * 27 / 1; //( 27/1 = 27·ÖÖ®1)
	return ldResult;
}
