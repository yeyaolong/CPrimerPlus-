// getinfo.cpp -- input and output
#include <iostream>

int main3()
{
	using namespace std;

	int carrots;

	cout << "How many carrots do you have?" << endl;
	cin >> carrots;	// c++ input
	cout << "Here are tow more.";
	carrots = carrots + 2;
	// then next line concatenates output
	cout << "Now you have " << carrots << " carrots." << endl;

	return 0;
}