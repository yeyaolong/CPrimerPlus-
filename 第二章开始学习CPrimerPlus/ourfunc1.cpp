// ourfunc1.cpp -- repositioning the using directive
#include <iostream>
using namespace std; // affets all function definitions in this file

void simon2(int);

int main()
{
	simon2(3);
	cout << "Pick an integer: ";
	int count;
	cin >> count;
	simon2(count);
	cout << "Done!" << endl;
	return 0;
}

void simon2(int n)
{
	cout << "Simon says touch your toes " << n << " times." << endl;
}