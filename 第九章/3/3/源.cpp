#include <iostream>

struct chaff
{
	char dross[20];
	int slag;
};

// static memory
chaff cf1[2];

int main()
{

	chaff  *cf2 = new chaff[2];
	chaff arr[2] = {
		{ "peijie", 23 },
		{ "zhdhua", 20 },
	};
	strcpy_s(cf2[0].dross, arr[0].dross);
	cf2[0].slag = arr[0].slag;

	strcpy_s(cf2[1].dross, arr[1].dross);
	cf2[1].slag = arr[1].slag;

	for (int i = 0; i < 2; i++)
	{
		std::cout << cf2[i].dross << "  " << cf2[i].slag << std::endl;
	}


	system("pause");
	return 0;
}