#include <iostream>

const int Len = 5;
template <typename T>
T Max(T * arr)
{
	T max = arr[0];
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;

}
int main()
{
	using namespace std;
	int arr_int[Len] = { 1, 2, 3, 4 ,5 };
	double arr_flt[Len] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
	cout << "Max int = " << Max(arr_int) << endl;
	cout << "Max double = " << Max(arr_flt) << endl;
	system("pause");
	return 0;
}