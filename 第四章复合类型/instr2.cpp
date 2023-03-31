// ≥Ã–Ú«Âµ• 4.4 instr2.cpp -- reading more than one word with getling

#include<iostream>
int main()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name: \n";
	cin.getline(name, ArSize); // reads through newline
	cout << "Enter your favorite dessert:\n";
	cin.getline(dessert, ArSize);
	cout << "I have some deliciour " << dessert;
	cout << " for you, " << name << ".\n";

	return 0;

}