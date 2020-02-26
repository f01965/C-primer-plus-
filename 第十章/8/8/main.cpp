#include "list.h"
#include <iostream>

void addData(Item &it)
{
	it.data = 6789;
}
int main()
{
	List list;
	Item item = { "f01965",1000 };
	Item item2 = { "zzzz",2000 };
	if (list.isEmpty())
	{
		std::cout << "List is empty " << std::endl;
	}
	list.additem(item);
	list.additem(item2);
	std::cout << "Count = " << list.Count() << std::endl;
	list.show();

	if (list.isFull())
	{
		std::cout << "List is not Full " << std::endl;
	}
	std::cout << "Change Something " << std::endl;
	list.visit(addData);
	list.show();

	system("pause");
	return 0;
}