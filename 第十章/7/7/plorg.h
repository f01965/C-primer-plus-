#pragma once
#ifndef PLORG_H_
#define PLORG_H_
const int SIZE = 20;
class plorg
{
private:
	char name_[SIZE];
	int  ci_;
public:
	plorg(const char *name = "Plorg", int ci = 50);
	void setCI(int ci);
	void show() const;
};

#endif // !PLORG_H_

