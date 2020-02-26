#include <iostream>
#include <string>

using namespace std;

struct stringy
{
	char * str;
	int ct;
};

void set(stringy &dest,  char *source);
void show(const stringy &t1,int n = 1);
void show(const char *str, int n = 1);
int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(beany,testing);
	show(beany);
	show(beany,2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
	system("pause");
	return 0;
}
void set(stringy &dest, char *source)
{
	int len = strlen(source);
	dest.ct = len;
	dest.str = new char[len];
	dest.str = source;
	//strcpy_s(dest.str, len, source);
}
void show(const stringy &t1, int n)
{
	int i = 1;
	while (n>0)
	{
		cout << i << " times :";
		cout << t1.str << " len: "<< t1.ct << endl;
		i++;
		n--;
	}
	
}
void show(const char *str, int n)
{
	int i = 1;
	while (n>0)
	{
		cout << i << " times :";
		cout << str << endl;
		i++;
		n--;
	}
}