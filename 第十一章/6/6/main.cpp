#include "stonewt.h"

int main()
{
	Stonewt arr[6] = { 50, 100, 150 };
	for (int i = 3; i < 6; ++i)
	{
		std::cout << "Stonewt[" << i << "]: ";
		double pds;
		std::cin >> pds;
		Stonewt st = Stonewt(pds);
		arr[i] = st;
	}
	Stonewt max = arr[0], min = arr[0];
	int num = 0;
	Stonewt eleven = Stonewt(11);
	for (int i = 0; i < 6; ++i)
	{
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > eleven)
			num++;
	}
	std::cout << "max: " << max << std::endl;
	max.set_Pound();
	std::cout << "min: " << min << std::endl;
	min.set_Pound();
	std::cout << num << "elements > 11 stones" << std::endl;
	system("pause");
	return 0;
}