#include "worker.h"
#include <iostream>
#include <fstream>
#include <ctime>

int main()
{
	using namespace std;
	using WORKER::Worker;
	srand(time(0));
	double direction;
	Worker step;
	Worker result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	ofstream file;
	file.open("data.txt");

	cout << "Enter target distance (q or Q):";
	while (cin >> target)
	{
		cout << "Enter step length:";
		if (!(cin >> dstep))
			break;
		cout << "Target Distance:" << target << ", Step Size:" << dstep << "\n";
		file << "Target Distance:" << target << ", Step Size:" << dstep << "\n";
		while (result.m_val() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Worker::POL);
			result = result + step;
			cout << steps << ":" << result << "\n";
			file << steps <<":" << result << "\n";
			steps++;
		}
		cout << "After " << steps << "steps, the subject has the following location:\n";
		file << "After " << steps << "steps, the subject has the following location:\n";
		cout << result << endl; 
		file << result << endl;
		result.mod_pol();
		cout << "or \n" << result << endl;
		file << "or \n" << result << endl;
		cout << "Average outward distance per step = " << result.m_val() / steps << endl;
		file << "Average outward distance per step = " << result.m_val() / steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance(q or Q) :";
	}
	cout << "Bye!\n";
	file.close();
	cin.clear();
	system("pause");
	return 0;
}