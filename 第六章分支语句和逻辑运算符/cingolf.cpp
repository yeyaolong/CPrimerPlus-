// �����嵥 6.14 cingolf.cpp
#include<iostream>
const int Max = 5;
int main14()
{
	using namespace std;

	int golf[Max];
	cout << "Please enter your golf scores.\n";
	cout << "You must enter " << Max << " rounds.\n";
	int i;
	for (i = 0; i < Max; i++)
	{
		cout << "round #" << i + 1 << ": ";
		while (!(cin >> golf[i]))
		{
			cin.clear();
			while (cin.get() != '\n')
			{
				continue;
			}
			cout << "Plear enter a number: ";
		}
	}
	double total = 0.0;
	for (i = 0; i < Max; i++)
	{
		total += golf[i];
	}
	cout << total / Max << " = average score " << Max << " round\n";

	return 0;
}