#include <iostream>

int main()
{
	using namespace std;
	cout << "Please enter one of the following choice:" << endl;
	cout << "c) carnivor              p) pianist" << endl;
	cout << "t) tree                  g) game" << endl;

	char chChoice;
	cin >> chChoice;
	while (1)
	{
		switch (chChoice)
		{
		case 'c':
		case 'C':
			cout << "A maple is a carnivor" << endl;
			break;
		case 'p':
		case 'P':
			cout << "A maple is a carnivor" << endl;
			break;
		case 't':
		case 'T':
			cout << "A maple is a carnivor" << endl;
			break;
		case 'g':
		case 'G':
			cout << "A maple is a carnivor" << endl;
			break;

		default:
			cout << "Please enter a c,p,t or g :";
			cin >> chChoice;
			continue;
		}
		break;
	}

	system("pause");
	return 0;
}