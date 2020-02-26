#include <cstring>
#include <iostream>
#include "worker.h"
#include "queuetp.h"

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::strchr;
	QueueTP <Worker> q(3);
	if (q.isempty())
		cout << "Queue is empty" << endl;

	cout << "add worker1 to queue..." << endl;
	Worker w1("name1", 1);
	q.push(w1);
	

	cout << "add worker2 to queue..." << endl;
	Worker w2("name2", 2);
	q.push(w2);

	cout << "add worker3 to queue..." << endl;
	Worker w3;
	q.push(w3);

	if (q.isfull())
		cout << "queue is full" << endl;

	Worker w;
	cout << "delete worker1..." << endl;
	q.pop(w);
	w.Show();
	cout << "delete worker2..." << endl;
	q.pop(w);
	w.Show();
	cout << "delete worker3..." << endl;
	q.pop(w);
	w.Show();
	if (q.isempty())
		cout << "queue is empty" << endl;

	system("pause");
	return 0;
}
