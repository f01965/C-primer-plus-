#include <iostream>

using namespace std;
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void DisplayValue(box myBox);
void AddrValue(box * mybox);
int main()
{
	box  mybox = { "f01965",1.0, 2.0,3.0,4.0 };
	DisplayValue(mybox);
	AddrValue(&mybox);
	cout << "VOLUME:" << mybox.volume << endl;
	system("pause");
	return 0;
}

void DisplayValue(box myBox)
{
	cout << "DISPLAY:";
	cout << myBox.maker << endl;
	cout << myBox.height << endl;
	cout << myBox.width << endl;
	cout << myBox.length << endl;
	cout << myBox.volume << endl;
}

void AddrValue(box * mybox)
{
	mybox->volume = mybox->height * mybox->length * mybox->width;
}