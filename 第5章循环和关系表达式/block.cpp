// ³ÌĞòÇåµ¥5.8 block.cpp -- use a block statment
#include<iostream>
int main8()
{
	using namespace std;
	cout << "The Amazing Accounto will sun and average ";
	cout << "five numbers for you.\n";
	cout << "Please enter five values:\n";
	double number;
	double sum = 0.0;
	for (int i = 1; i <= 5; i++)
	{
		// block starts here
		cout << "Value " << i << ": ";
		cin >> number;
		sum += number;
	}	// block ends here

	cout << "Five exquisite coices indeed! ";
	cout << "They sum to " << sum << endl;
	cout << "and average to " << sum / 5 << ".\n";
	cout << "The Amazing Accounto bids you adieu!\n";

	return 0;
}