#include <iostream>
#include <string>
const int ArSize = 10;
void strcount(const std::string &str);

int main(void)
{
	using namespace std;
	string input;
	string next;
	cout << "Enter a line:\n";
	getline(cin, input);
	while (input != "")
	{
		strcount(input);
		cout << "Enter next line (empty line to quit): " << endl;
		getline(cin, input);
	}
	cout << "Bye" << endl;
	system("pause");
	return 0;
}
void strcount(const std::string &str)
{
	using namespace std;
	static int total = 0;
	int count = 0;
	int chCount = 0;

	cout << "\"" << str << "\" contains ";
	count = str.size();
	while (count > 0)
	{
		if (str[count] == ' ')
		{
			chCount++;
		}
		count--;
	}
	cout << count << " characters" << endl;
	total = total + str.size() - chCount;
	cout << total << " characters total" << endl;
}