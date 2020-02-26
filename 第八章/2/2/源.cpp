#include <iostream>

const int SIZE = 40;

struct CandyBar
{
	char name[SIZE];
	double height;
	int  temperature;
};
void setCB(CandyBar &cb1, const char *name ="Millennium Munch", double h1=2.85, int t1=350);
void show(const CandyBar &b);

int main()
{
	using namespace std;
	CandyBar cb;
	setCB(cb);
	show(cb);
	cout << "Next" << endl;
	setCB(cb,"f01965",2.33,660);
	show(cb);
	system("pause");
	return 0;
}

void setCB(CandyBar &cb1, const char *name, double h1, int t1)
{
	strcpy_s(cb1.name, name);
	 // cb1.name = name; ´íÎóµÄÐ´·¨
	cb1.height = h1;
	cb1.temperature = t1;
	
}
void show(const CandyBar &b)
{
	using namespace std;
	cout << b.name << endl;
	cout << b.height << endl;
	cout << b.temperature << endl;
}