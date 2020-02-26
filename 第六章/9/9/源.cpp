#include <iostream>
#include <string>
#include <fstream>

#define SIZE 255

using namespace std;
struct user_info
{
	char name[SIZE];
	double amount;
};
int main()
{
	unsigned int iCount = 0;
	unsigned int temp = 0;
	ifstream fOpenFile;
	fOpenFile.open("data");
	
	if (!fOpenFile.is_open())
	{
		cout << "Could not open file." << endl;
		cout << "program terminating." << endl;
		exit(EXIT_FAILURE);
	}
	fOpenFile >> iCount;
	fOpenFile.get();
	cout << "iCount = " << iCount << endl;
	user_info *pUserInfo = new user_info[iCount];
	for (int i = 0; i < iCount; i++)
	{
		fOpenFile.getline(pUserInfo[i].name, SIZE);
		fOpenFile >> pUserInfo[i].amount;
		fOpenFile.get();
		cout << "Name: " << pUserInfo[i].name << endl;
		cout << "Donation: " << pUserInfo[i].amount << endl;
	}
	
	cout << "Grand Patrons >= 10000:" << endl;
	for (int i = 0; i < iCount; i++)
	{
		if (pUserInfo[i].amount >= 10000)
		{
			cout << "Name: " << pUserInfo[i].name << endl;
			cout << "Donation: " << pUserInfo[i].amount << endl;
			temp++;
		}
	}
	if (temp == 0)
	{
		cout << "None .." << endl;
	}
	cout << "Grand Patrons < 10000 :" << endl;
	temp = 0;
	for (int i = 0; i < iCount; i++)
	{
		if (pUserInfo[i].amount < 10000)
		{
			cout << "Name: " << pUserInfo[i].name << endl;
			cout << "Donation: " << pUserInfo[i].amount << endl;
			temp++;
		}
	}
	if (temp == 0)
	{
		cout << " None .." << endl;
	}
	system("pause");
	return 0;
}