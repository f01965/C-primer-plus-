#include <iostream>
#include <cctype>
int main()
{
	using namespace std;
	char chUserInput;

	cout << "Input : ";
	cin.get(chUserInput);
	while (chUserInput != '@') {
		if (isupper(chUserInput)) {
			chUserInput = tolower(chUserInput);
		}
		else if (islower(chUserInput)) {
			chUserInput = toupper(chUserInput);
		}
		if (!isdigit(chUserInput)) {
			cout << chUserInput;
		}
		cin.get(chUserInput);
	}
	cout << endl;
	system("pause");
	return 0;
}