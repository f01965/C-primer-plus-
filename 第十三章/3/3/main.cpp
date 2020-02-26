#include "dma.h"
#include <iostream>
const int CLIENTS = 4;
int main()
{
	using std::cout;
	using std::endl;
	baseDMA shirt("Portrabelly", 8);
	lacksDMA balloon("red", "Blumpo", 4);
	hasDMA map("Mercator", "Buffalo Kyes", 5);
	cout << "shirt\n" << shirt << endl;
	cout << "balloon\n"<< balloon << endl;
	cout << "map\n" << map << endl;
	lacksDMA balloon2(balloon);
	hasDMA map2;
	map2 = map;
	cout << "balloon2\n" << balloon2 << endl;
	cout << "map2\n" << map2 << endl;

	ABC * pts[3];
	pts[0] = &shirt;
	pts[1] = &balloon;
	pts[2] = &map;

	for (int i = 0; i < 3; ++i)
		cout << i << " : "<<*pts[i] << endl;
	for (int i = 0; i < 3; ++i)
		pts[i]->View();
	system("pause");
	return 0;
}