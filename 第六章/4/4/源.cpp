#include <iostream>

#define strsize 10
using namespace std;

void display_name(const struct bop *bData, int size);
void display_title(const struct bop *bData, int size);
void display_bopname(const struct bop *bData, int size);
void display_preference(const struct bop *bData, int size);
struct bop {
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int  preference;
};
int main()
{
	const int size = 4;
	const struct bop bData[size] = {
	{ "AAAAA","title1","bop1",1 },
	{ "BBBBB","title2","bop2",3 }, 
	{ "CCCCC","title3","bop3",0 }, 
	{ "DDDDD","title4","bop4",4 }
	};
	cout << "Benevolent Order of Proframers Report" << endl;
	cout << "a. display by name           b. display by title" << endl;
	cout << "c. display by bopname        d. display by preference" << endl;
	cout << "q. quit" << endl;
	cout << "Enter your choice:";
	char chChoice;
	while (true)
	{
		cin >> chChoice;
		
		cout <<"\nYou Choice:" <<chChoice << endl;
		switch (chChoice)
		{
		case 'a':
			display_name(bData, size);
			break;
		case 'b':
			display_title(bData, size);
			break;
		case 'c':
			display_bopname(bData, size);
			break;
		case 'd':
			display_preference(bData, size);
			break;
		case 'q':
			exit(EXIT_FAILURE);
		default:
			cout << "Input error.." << endl;
			break;
		}
		cout << "Next choice:";

	}
	return 0;
}

void display_name(const struct bop *bData,int size)
{
	cout << "Full Name:" << endl;
	for(int i = 0 ; i <size ;i++)
	{
		cout << bData[i].fullname << endl;
	}
}
void display_title(const struct bop *bData, int size)
{
	cout << "Full Name:" << endl;
	for (int i = 0; i <size; i++)
	{
		cout << bData[i].title << endl;
	}
}
void display_bopname(const struct bop *bData, int size)
{
	cout << "Full Name:" << endl;
	for (int i = 0; i <size; i++)
	{
		cout << bData[i].bopname << endl;
	}
}
void display_preference(const struct bop *bData, int size)
{
	cout << "Full Name:" << endl;
	for (int i = 0; i <size; i++)
	{
		if (bData[i].preference == 0)
		{
			cout << bData[i].title << endl;
		}
		else if (bData[i].preference == 1) 
		{
			cout << bData[i].title << endl;
		}
		else if (bData[i].preference == 2)
		{
			cout << bData[i].title << endl;
		}
		
	}
}