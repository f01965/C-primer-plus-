#include <iostream>
#include <string>
using namespace std;
void ToUpper(string &str);
int main()
{
	string str;
	cout << "Enter a string (q to quit): ";
	getline(cin, str);
	while (str != "q")
	{
		ToUpper(str);
		cout << str << endl;
		cout << "Enter a string (q to quit): ";
		getline(cin, str);
	}
	cout << "Bye" << endl;
	system("pause");
	return 0;
}
void ToUpper(string &str)
{
	for (int i = 0; i < str.size(); i++)
	{
		if (isalpha(str[i]))
		{
			str[i] = toupper(str[i]); // convert
		}
	}
}