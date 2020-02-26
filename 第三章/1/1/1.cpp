#include <iostream>

int main()
{
	using namespace std;
	double liK, K;
	const int yinZi = 100;
	cout << "Input high : ___ \b\b\b\b";
	cin >> liK;
	
	K = liK / yinZi ;
	cout << "liK = " << liK << endl;
	cout << "K = " << K << endl;
	system("pause");
	return 0;
}
