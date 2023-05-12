// ≥Ã–Ú«Âµ• 5.18 textin3.cpp -- reading chars to end of file
#include<iostream>
int main()
{
	using namespace std;
	char ch;
	int count = 0;
	cin.get(ch);	// attemp to read a char
	while (cin.fail() == false)
	{
		cout << ch;	// echo character
		++count;
		cin.get(ch);	// attemp to read another char
	}
	cout << endl << count << " characters read\n";

	return 0;

}