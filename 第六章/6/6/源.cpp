#include <iostream>
#include <string>

using namespace std;
struct user_info
{
	string name;
	double amount;
};
int main()
{
	unsigned int uiNum = 0;
	unsigned int temp = 0;
	cout << "Enter the number of contributors:";
	cin >> uiNum;
	cin.get();

	struct user_info *pUserInfo = new user_info[uiNum];
	for (int i = 0; i < uiNum; i++)
	{
		cout << "Enter the name: ";
		cin >> pUserInfo[i].name;
		cout << "Donation: ";
		cin >> pUserInfo[i].amount;
	}
	cout << "Grand Patrons >= 10000:" << endl;
	for (int i = 0; i < uiNum; i++)
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
		cout << " None .." << endl;
	}
	cout << "Grand Patrons < 10000 :" << endl;
	temp = 0;
	for (int i = 0; i < uiNum; i++)
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