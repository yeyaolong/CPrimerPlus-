// �����嵥 3.8 floatnum.cpp -- floating point types
#include<iostream>

int main8()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);	// fixed point
	float tub = 10.0 / 3.0;	// good to about 6 places
	double mint = 10.0 / 3.0;	// good to aboult 15 places
	const float million = 1.0e6;

	cout << "tub = " << tub;
	cout << ", a million tubs = " << million * tub;
	cout << ".\nand ten million tubes = ";
	cout << 10 * million * tub << endl;

	cout << "mint = " << mint << " and a million mints = ";
	cout << million * mint << endl;

	return 0;
}
