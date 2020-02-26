#include <iostream>
#include <fstream>

int main()
{
	using namespace std;
	ifstream fOpenFile;
	fOpenFile.open("data");

	char chChar;
	int  iCount = 0;
	while (fOpenFile >> chChar)
	{
		iCount++;
	}
	fOpenFile.close();
	cout << "File char = " << iCount << endl;
	system("pause");
	return 0;
}