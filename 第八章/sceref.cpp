// ≥Ã–Ú«Âµ• 8.3 sceref.cpp -- defining and using a reference
#include<iostream>
int main3()
{
	using namespace std;
	int rats = 10l;
	int& rodents = rats;

	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;

	cout << "rats address = " << &rats;
	cout << ", rodents address = " << &rodents << endl;

	int bunnies = 50;
	rodents = bunnies;	// can we change the reference
	cout << ", rats = " << rats;
	cout << ", rodents = " << rodents << endl;
	cout << "bunnies address = " << &bunnies;
	cout << ", rodents address = " << &rodents << endl;
	return 0;
}