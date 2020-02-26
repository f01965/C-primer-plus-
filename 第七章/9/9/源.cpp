#include <iostream>

using namespace std;

const int SLEN = 30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student *ps);
void display3(const student pa[], int n);

int main()
{
	cout << "ENTER SIZE:";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
	{
		continue;
	}
	student *ptr_stu = new  student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete[] ptr_stu;
	cout << "Done..\n";
	system("pause");
	return 0;
}
int getinfo(student pa[], int n)
{
	student *getPa;
	int i;
	for (i = 0; i < n; i++)
	{
		getPa = pa + i;
		cout << "Name :";
		cin.getline(getPa->fullname, SLEN);
		cout << "hobby:";
		cin.getline(getPa->hobby,SLEN);
		cout << "ooplevel;";
		cin >> getPa->ooplevel;
		cin.get();
	}
	return i;
}
void display1(student st)
{
	cout << "display1 =====" << endl;
	cout << "name: " << st.fullname << endl;
	cout << "hobby: " << st.hobby << endl;
	cout << "ooplevel: " << st.ooplevel << endl;
}
void display2(const student *ps)
{
	cout << "display2 =====" << endl;
	cout << "name: " << ps->fullname << endl;
	cout << "hobby: " << ps->hobby << endl;
	cout << "ooplevel: " << ps->ooplevel << endl;
}
void display3(const student pa[], int n)
{
	const student * pt;
	cout << "display3 =====" << endl;
	for (int i = 0; i < n; ++i)
	{
		pt = pa + i;
		cout << "name: " << pt->fullname << endl;
		cout << "hobby: " << pt ->hobby << endl;
		cout << "ooplevel: " << pt->ooplevel << endl;
	}
}