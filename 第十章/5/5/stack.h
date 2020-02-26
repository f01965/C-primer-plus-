#pragma once
#ifndef STACK_H_
#define STACK_H_

struct customer {
	char fullname[35];
	double payment;
};
typedef customer Item;

class Stack {
private:
	static const int MAX = 10;
	Item items_[MAX];
	int top_;

public:
	Stack();
	bool isempty() const;
	bool isfull() const;
	bool push(const Item & item);
	bool pop(Item & item);
};

#endif