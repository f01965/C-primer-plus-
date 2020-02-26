#include "stack.h"

Stack::Stack(int n)
{
	top_ = 0;
	size_ = n;
	pitems_ = new Item[n];
}
Stack::Stack(const Stack & st)
{
	top_ = st.top_;
	size_ = st.size_;
	pitems_ = new Item[size_];
	for (int i = 0; i < size_; i++)
		pitems_[i] = st.pitems_[i];
}
Stack::~Stack()
{
	delete[]pitems_;
}
bool Stack::isempty() const
{
	return top_ == 0;
}
bool Stack::isfull() const
{
	return top_ == MAX;
}
bool Stack::push(const Item &item)
{
	if (top_ < MAX)
	{
		pitems_[top_++] = item;
		return true;
	}
	else
		return false;
}
bool Stack::pop(Item &item)
{
	if (top_ > 0)
	{
		item = pitems_[--top_];
		return true;
	}
	else
		return false;
}

Stack & Stack::operator = (const Stack &st)
{
	top_ = st.top_;
	size_ = st.size_;
	delete[] pitems_;
	pitems_ = new Item[size_];
	for (int i = 0; i < size_; i++)
		pitems_[i] = st.pitems_[i];
	return *this; 
}