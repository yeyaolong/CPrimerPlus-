// 程序清单 4.18 arraynew.cpp -- using new operator for arrays
#include<iostream>
int main18()
{
	using namespace std;
	double* p3 = new double[3]; // space for 3 doubles
	p3[0] = 0.2;	// treat p3 like an array name
	p3[1] = 0.5;
	p3[2] = 0.8;

	cout << "p3[1] is " << p3[1] << endl;
	p3 = p3 + 1;	// increment the pointer 指针向后移动一个位置
	cout << "Now p3[0] is " << p3[0] << " and ";
	cout << "p3[1] is " << p3[1] << endl;
	p3 = p3 - 1;	// point back to beginning	指针向前移动一个位置
	delete[] p3;	// free the memory
	return 0;
}
