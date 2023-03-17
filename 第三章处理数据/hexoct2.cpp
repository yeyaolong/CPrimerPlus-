// ≥Ã–Ú«Âµ•3.4 hexoct2.cpp -- display values in hex and octal
#include <iostream>
using namespace std;
int main4()
{
	using namespace std;
	int chest = 42;
	int waist = 42;
	int inseam = 42;

	cout << "Monsieur cuts a striking figure!" << endl;
	cout << "Chest = " << chest << "(decimal for 42)" << endl;
	cout << hex; // manipulator for changing number base
	cout << "waist = " << waist << "£®hexadecimal for 42£©" << endl;
	cout << oct;
	cout << "inseam = " << inseam << "(octal for 42)" << endl;

	return 0;
}