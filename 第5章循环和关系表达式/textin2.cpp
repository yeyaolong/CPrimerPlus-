// �����嵥 5.17 textin2.cpp -- using cin.get(char)
#include<iostream>
int main17()
{
	using namespace std;
	char ch;
	int count = 0;

	cout << "Enter characters; enter # to quit: \n";
	cin.get(ch);
	while (ch != '#')
	{
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << " characters read\n";

	return 0;
}