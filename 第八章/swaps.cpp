// �����嵥 8.4 swaps -- swapping with reference and with pointers

#include<iostream>
#include"swaps.h"

int main4()
{
	using namespace std;
	int wallet1 = 300;
	int wallet2 = 350;
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	cout << "Using references to swap contents:\n";

	swapr(wallet1, wallet2);	// pass variables
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;


	cout << "Using pointers to swap contents again:\n";
	swapp(&wallet1, &wallet2);	// pass address of variable
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	cout << "Trying to passing by value:\n";
	swapv(wallet1, wallet2);
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	return 0;


}

void swapr(int& a, int& b)	// use reference
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}

void swapp(int* p, int* q)
{
	int temp;

	temp = *p;	// use *p, *q for values of variables
	*p = *q;
	*q = temp;
}

void swapv(int a, int b)	// try using values
{
	int temp;

	temp = a;	// use a, b for values of variables
	a = b;
	b = temp;
}