#pragma once
#include <iostream>
#include <string>   // 不加的话， cout << std::string 对象就会出错
class Person {
private:
	static const int LIMIT = 25;
	std::string lname_;
	char fname_[LIMIT];

public:
	Person() { lname_ = ""; fname_[0] = '\0'; }
	Person(const std::string & lname, const char * fname = "Heyyou");
	void show() const;
	void formal_show() const;
};