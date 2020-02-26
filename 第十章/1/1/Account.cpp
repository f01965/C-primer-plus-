#include <iostream>
#include "BankAccount.h"

BankAccount::BankAccount(std::string name, std::string number, double money)
{
	name_ = name;
	number_ = number;
	money_ = money;
}
BankAccount::BankAccount()
{
	name_ = "";
	number_ = "";
	money_ = 0.0;
}
BankAccount::~BankAccount()
{
	// nothing 
}
bool BankAccount::SaveM(double value)
{
	if (money_ < 0.0)
	{
		std::cout << "Save Maybe Error. money < 0 ." << std::endl;
		return 0;
	}
	else
	{
		money_ += value;
		return 1;
	}
}
bool BankAccount::TackOutM(double value)
{

	if (money_ < value)
	{
		std::cout << "Tack Out Maybe Error. Not have enough money ." << std::endl;
		return 0;
	}
	else
	{
		money_ -= value;
		return 1;
	}

}
void BankAccount::ShowInfo()
{
	using std::cout;
	using std::ios_base;
	using std::endl;
	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);

	cout << "Account name: " << name_<<"  ";
	cout << "Account number: " << number_ << endl;
	cout.precision(2);
	cout << "Money: " << money_ << endl;

	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}