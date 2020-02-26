#include <iostream>
#include <string>
#include <cctype>
int main()
{
	using namespace std;

	cout << "Plz enter ,and enter q ( = exit ):" << endl;

	string strWord;
	char chFirstWord;
	int  vowel = 0, consonant = 0, other = 0;
	cin >> strWord;
	while (strWord != "q")
	{
		chFirstWord = strWord[0];
		// ÅÐ¶ÏÔªÒô»ò¸¨Òô
		if (isalpha(chFirstWord)) {
			switch (chFirstWord) {
			case 'a':
			case 'A':
				vowel++;
				break;
			case 'e':
			case 'E':
				vowel++;
				break;
			case 'i':
			case 'I':
				vowel++;
				break;
			case 'o':
			case 'O':
				vowel++;
				break;
			case 'u':
			case 'U':
				vowel++;
				break;
			default:
				consonant++;
				break;
			}
		}
		else
		{
			other++;
		}
		cin >> strWord;

	}
	cout << vowel << " words beginning with vowels" << endl;
	cout << consonant << " words beginning with consonants" << endl;
	cout << other << " others" << endl;
	system("pause");
	return 0;
}