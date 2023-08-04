// ³ÌĞòÇåµ¥ 8.2 firstref.app -- defining and using a reference
#include<iostream>
int main2()
{
	using namespace std;
	int rats = 10l;
	int& rodents = rats; // rodents is a reference;
	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;
	rodents++;
	cout << "rats =" << rats;
	cout << ", rodents = " << rodents << endl;
	rodents++;
	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;

	// some implementations require type casting the following
	// address to type unsigned
	cout << "rats address = " << &rats;
	cout << ", rodents address = " << &rodents << endl;

	return 0;
}