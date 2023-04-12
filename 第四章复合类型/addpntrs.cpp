// 程序清单4.19 addpntrs.cpp -- pointer ddition
#include<iostream>
int main()
{
	using namespace std;
	double wages[3] = { 10000.0, 20000.0, 30000.0 };
	short stacks[3] = { 3, 2, 1 };

	// Here are two ways to get the address of an array
	double* pw = wages;	// name of an array = address;
	short* ps = &stacks[0];	// or use address operator

	// with array element
	cout << "pw = " << pw << ", *pw = " << *pw << endl;	// 地址, 10000
	pw = pw + 1;
	cout << "add 1 to the pw pointer:\n";
	cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";	// 地址, 20000
	cout << "ps = " << ps << ", *ps = " << *ps << endl;	// 地址, 3

	ps = ps + 1;
	cout << "add 1 to the ps pointer:\n";
	cout << "ps = " << ps << ", *ps = " << *ps << "\n\n"; // 地址+sizeof(short), 2

	cout << "access two elements with array notation\n";
	cout << "stacks[0] = " << stacks[0]				// 3
		<< ", stacks[1] = " << stacks[1] << endl;	// 2

	cout << "access tow elements with pointer notation\n";
	cout << "*stacks = " << *stacks					// 3
		<< ", *(stacks + 1) = " << *(stacks + 1) << endl;	// 2

	cout << sizeof(wages) << " = size of wages array\n"; // 3 * sizeof(double)
	cout << sizeof(pw) << " = size of pw pointer\n";// sizeof(double)
	return 0;
}
