#include "stack.h"
#include <iostream>
Stack::Stack()
{
	top_ = 0;
}
bool Stack::isempty() const
{
	return top_ == 0;
}

bool Stack::isfull() const
{
	return top_ == MAX;
}
bool Stack::push(const Item & item)
{
	if (top_ < MAX)
	{
		items_[top_++] = item;
		return true;
	}
	else
	{
		std::cout << "Stack Full." << std::endl;
		return false;
	}
}

bool Stack::pop(Item & item)
{
	if (top_ > 0)
	{
		item = items_[--top_];
		return true;
	}
	else
	{
		std::cout << "Stack Empty." << std::endl;
		return false;
	}
}