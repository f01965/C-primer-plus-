#include "cow.h"
#include <iostream>

int main()
{
	Cow c1;
	Cow c2 = Cow("f01965", "C++", 120);
	c2.ShowCow();

	Cow c3 = c2;  // ���ƹ��캯��
	c3.ShowCow();

	c1 = c3;  // ���ظ�ֵ�����
	c1.ShowCow();

	system("pause");
	return 0;
}