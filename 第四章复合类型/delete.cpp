// 程序清单 4.22 delete.cpp -- using the delete operator
#include<iostream>
#include<cstring>	// or string.h

using namespace std;

char* getname(void);	// function prototype

int main()
{
	char* name;	// create pointer but no storage

	name = getname();	// assign address of string name
	cout << name << " at " << (int*)name << "\n";
	delete[] name;	// memory freed

	name = getname();	// reuse freed memory
	cout << name << " at " << (int*)name << "\n";
	delete[] name;

	return 0;
}

char* getname()	// return pointer to new string
{
	char temp[80];	// tempory storage
	cout << "Enter last name: ";
	cin >> temp;
	// cout << "length = " << strlen(temp) << endl;
	char* pn = new char[strlen(temp) + 1];
	// cout << "length2 = " << strlen(temp) + 1 << endl;
	strcpy_s(pn, strlen(temp) + 1, temp);	// copy string into smaller space
	// strcpy_s(pn, strlen(pn), temp);	// 不能这样写，因为这里 pn 还没有被初始化,strlen(pn)会在运行时报错
	return pn;	// temp lost when function ends
}