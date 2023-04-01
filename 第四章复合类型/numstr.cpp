// 程序清单 4.6 numstr.cpp -- following number input with line input
#include<iostream>
int main6()
{
	using namespace std;
	cout << "What year was your house built?\n";
	int year;
	// cin >> year; // 输入数字后，会导致下面输入地址的cin直接被跳过，因为cin.getline实际拿到了一个字符串结束符号 \0
	(cin >> year).get();
	cout << "What is its street address?\n";
	char address[90];
	cin.getline(address, 80);
	cout << "Year build: " << year << endl;
	cout << "Address: " << address << endl;
	cout << "Done!\n";

	return 0;
}