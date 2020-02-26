#ifndef STACK_H_
#define STACK_H_
typedef unsigned long Item;
class Stack
{
private:
	enum {MAX=10};
	Item *pitems_;
	int size_;
	int top_;
public:
	Stack(int n = MAX);
	Stack(const Stack & st);
	~Stack();
	bool isempty() const;
	bool isfull() const;
	bool push(const Item &item);
	bool pop(Item &item);
	Stack &operator=(const Stack &st);
};

#endif