#include "worker.h"
#include <iostream>
#include <fstream>
#include <ctime>

const int maxsize = 20;
int main()
{
	using namespace std;
	using WORKER::Worker;
	srand(time(0));
	double direction;
	Worker step;
	Worker result(0.0, 0.0);
	//Worker stayRe[20];
	unsigned long steps = 0;
	double target;
	double dstep;
	int    Ntimes = 0;
	int    times = 0;
	int    count[maxsize] = { 0 };
	ofstream file;
	file.open("data.txt");

	cout << "Enter target distance (q or Q):";
	cin >> target;
	cout << "Enter step length:";
	if (!(cin >> dstep))
		EXIT_FAILURE;
	cout << "Enter test times:";
	cin >> Ntimes;
	cout << "Target Distance:" << target << ", Step Size:" << dstep << "\n";
	while (Ntimes > 0)
	{
		cout << "Test times : " << times << endl;
		while (result.m_val() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Worker::POL);
			result = result + step;
			steps++;
		}
		cout << "After " << steps << "steps, the subject has the following location:\n";
		file << "After " << steps << "steps, the subject has the following location:\n";
		count[times] = steps;
		cout << result << endl;
		file << result << endl;
		result.mod_pol();
		cout << "or \n" << result << endl;
		file << "or \n" << result << endl;
		cout << "Average outward distance per step = " << result.m_val() / steps << endl;
		file << "Average outward distance per step = " << result.m_val() / steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		times++;
		Ntimes--;
	}

	int i;
	int max, average, min;
	max = count[0];
	min = count[0]; 
	average = 0;
	for (i = 0; count[i]; i++)
	{
		if (max < count[i])
		{
			max = count[i];
		}
		if (min > count[i])
		{
			min = count[i];
		}
		average += count[i];
	}
	average = average / i;
	cout << "MAX:" << max << "  min:" << min << "  average:" << average << endl;
	file << "MAX:" << max << "  min:" << min << "  average:" << average << endl;
	cout << "Bye!\n";
	file.close();
	cin.clear();
	system("pause");
	return 0;
}