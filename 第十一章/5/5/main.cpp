#include "stonewt.h"
#include <iostream>

int main()
{
	using std::cout;
	using std::endl;

	Stonewt s1;
	Stonewt s2 = Stonewt(2);
	Stonewt s3 = Stonewt(3, Stonewt::STN);

	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	cout << "s3: " << s3 << endl;
	s3.set_Pound();
	cout << "s3 = " << s3 << endl;
	cout << "s3 - s2 = " << s3 - s2 << endl;
	cout << "s2 + s1 = " << s2 + s1 << endl;
	cout << "3*s3 = " << 3 * s3 << endl;
	cout << "s3*2 = " << s3 * 2 << endl;
	s3.set_PDS_Float();
	cout << "s3 = " << s3 << endl;
	system("pause");
	return 0;
}