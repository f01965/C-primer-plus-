#include "person.h"

int main()
{
	Person one;
	Person two("Symthecraft");
	Person three("Dimwiddy", "Sam");
	three.show();
	three.formal_show();
	system("pause");
	return 0;
}