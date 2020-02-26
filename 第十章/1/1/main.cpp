#include <iostream>
#include "BankAccount.h"

int main()
{
	BankAccount  bk[3] = {
		{"peijie","f01965",10000000.00},
	{"zhangdonghua","melon",6000000.00},
	{}
	};

	for (int i = 0; i < 3; i++)
	{
		bk[i].ShowInfo();
	}

	bk[0].SaveM(12000);
	bk[1].TackOutM(5000);

	for (int i = 0; i < 3; i++)
	{
		bk[i].ShowInfo();
	}

	system("pause");
	return 0;
}