#pragma once
#ifndef LIST_H_
#define LIST_H_
#include <string>
const int MAX = 10;
struct DataInfo
{
	std::string typeName;
	int         data;
};
typedef struct DataInfo Item;

class List
{
private:
	Item item_[MAX];
	int  count_;
public:
	List();
	bool isEmpty();
	bool isFull();
	int  Count();
	void visit(void(*pf)(Item & ));
	bool additem(const Item & items);
	void show();
};
#endif // !LIST_H_
