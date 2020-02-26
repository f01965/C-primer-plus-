#include <iostream>

void printStr(const char *str);
void printStr(const char *str,int n);
int main()
{
	using namespace std;
	char str[] = "hello world.";
	printStr(str);
	cout << " Next :" << endl;
	printStr(str, 1);
	system("pause");
	return 0;
}

void printStr(const char *str)
{
	using namespace std;
	cout << str << endl;
}
void printStr(const char *str, int n)
{
	using namespace std;
	if (n > 0)
	{
		cout << str << endl;
	}
	else
	{
		cout << "no..." << endl;
	}
}