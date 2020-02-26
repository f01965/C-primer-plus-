#pragma once
#ifndef BankAccount_H_
#define BankAccount_H_
#include <string>

class BankAccount
{
private:
	std::string   name_;
	std::string   number_;
	double        money_;
public:
	BankAccount(std::string name, std::string number, double money );
	BankAccount();
	~BankAccount();
	void ShowInfo();
	bool SaveM(double value);
	bool TackOutM(double value);
};
#endif // !BankAccount_H_
