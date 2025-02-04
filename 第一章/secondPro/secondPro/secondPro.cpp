#include <iostream>
#include <climits>
int main()
{
	using namespace std;

	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int is " << sizeof(int) << " bytes." << endl;
	cout << "short is " << sizeof n_short << " bytes." << endl;
	cout << "long is " << sizeof n_long << " bytes." << endl;
	cout << "long long is " << sizeof n_llong << " bytes." << endl;

	cout << "Maxinum values :" << endl;
	cout << "int :" << n_int << endl;
	cout << "short :" << n_int << endl;
	cout << "long  :" << n_int << endl;
	cout << "long long :" << n_int << endl;

	cout << "Mininum value :" << INT_MIN << endl;
	cout << "Bits per byte :" << CHAR_BIT << endl;

	system("pause");
	return 0;
}
