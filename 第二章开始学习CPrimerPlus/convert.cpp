// convert.cpp -- convert stone to pounds
#include <iostream>

int stonetolb(int); // function prototype

int main6()
{
	using namespace std;
	int stone;
	cout << "Enter the weight in stone: ";
	cin >> stone;
	int pounds = stonetolb(stone);
	cout << stone << " stone = ";
	cout << pounds << " punds " << endl;
	return 0;
}

int stonetolb(int sts)
{
	return 14 * sts;
}

