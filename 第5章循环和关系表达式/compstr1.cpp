// �����嵥 5.11 compstr1.cpp -- comparing strings using arrays
#include<iostream>
#include<string>	// prototype for strcmp()

int main11()
{
	using namespace std;
	char word[5] = "?ate";
	for (char ch = 'a'; strcmp(word, "mate"); ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop ends, word is " << word << endl;

	return 0;
}