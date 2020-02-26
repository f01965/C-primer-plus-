#include <iostream>
#include "stock.h"

const int STKS = 4;

int main()
{
	using std::cout;

	// create an array of initialized objects
	Stock sts[STKS] = {
		Stock("NanoSmart", 12, 20.0),
		Stock("Boffo Objects", 200, 2.0),
		Stock("Monolithic Obelisks", 130, 3.25),
		Stock("Fleep Enterprises", 60, 6.5)
	};
	cout << "Stock holdings:\n";
	int i;
	for (i = 0; i < STKS; i++)
	{
		cout << sts[i];
	}
	// set pointer to first element
	const Stock * top = &sts[0];
	for (i = 1; i < STKS; i++)
		top = &top->tovpal(sts[i]);
	// now top points to the most valuable holding
	std::cout << "\nMost valuable holding:\n";
	cout << *top;

	std::cout << "\n";
	system("pause");

	return 0;
}