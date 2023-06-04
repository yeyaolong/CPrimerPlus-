// ≥Ã–Ú«Âµ• 6.9 condit.cpp
// condit.cpp -- using the conditional operator
#include<iostream>
int main9()
{
	using namespace std;
	int a, b;
	cout << "Enter two intergers: ";
	cin >> a >> b;
	cout << "The larger of " << a << " and " << b;
	int c = a > b ? a : b;	// c = a if a > b, else c = b
	cout << " is " << c << endl;
	return 0;
}