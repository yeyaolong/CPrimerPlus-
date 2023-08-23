// ≥Ã–Ú«Âµ• 8.9 left.cpp -- string function with a default argument
#include<iostream>

const int ArSize = 80;
char* left(const char* str, int n = 1);

int main9()
{
	using namespace std;
	char sample[ArSize];
	cout << "Enter a string:\n";
	cin.get(sample, ArSize);
	cout << "sample = " << sample << endl;
	char* ps = left(sample, 4);
	cout << ps << endl;
	delete[] ps;	// free old string
	ps = left(sample);

	cout << ps << endl;
	delete[] ps;	// free new string

	return 0;
}


// This function returns a pointer to a new string
// consistring of the first n characters in the str string.

char* left(const char* str, int n)
{
	if (n < 0)
	{
		n = 0;
	}
	char* p = new char[n + 1];

	int i;
	for (i = 0; i < n && str[i]; i++)
	{
		p[i] = str[i];
	}
	while (i <= n)
	{
		p[i++] = '\0';	// set reset of string '\0
	}

	return p;
}
