#include <iostream>

void time(int s, int t);

int main()
{ 
	double length;
	int s;
	int t;
	std::cout << "input s:";
	std::cin >> s;
	std::cout << "input t:";
	std::cin >> t;
	time(s, t);
	/*
	double m;
	m = length * 63240;
	std::cout << length << " light years ="<< m <<" astronomical units" << std::endl;
	*/
	system("pause");
	return 0;
}
void time(int s, int t)
{
	std::cout << "Time : " << s << ":" << t << std::endl;
}