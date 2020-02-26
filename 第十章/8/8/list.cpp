#include "list.h"
#include <iostream>
List::List()
{
	count_ = 0;
}
bool List::isEmpty()
{
	return count_ == 0;
}

bool List::isFull()
{
	return count_ == MAX;
}
int List::Count()
{
	return count_;
}
void List::show()
{
	for (int i = 0; i < count_; i++)
	{
		std::cout << "INFORMATION:" << item_[i].typeName << " "<< item_[i].data << std::endl;
	}
}
bool List::additem(const Item & item)
{
	if (isFull())
	{
		std::cout << "List Full." << std::endl;
		return false;
	}
	else
	{
		item_[count_++] = item;
		return true;
	}
}
void List::visit(void(*pf)(Item & ))
{
	for (int i = 0; i < count_; i++)
	{
		(*pf)(item_[i]);
	}
}