// �����嵥 7.1 calling.cpp -- defining, prototyping, and calling a function
#include <iostream>

void simple();	// function prototype


int main1()
{
	using namespace std;

	cout << "main() will call the simple() function:\n";
	simple();	// function call
	cout << "main() is finished with the simple() function.\n";

	// cin.get();

	return 0;
}


// function definition
void simple()
{
	using namespace std;
	cout << "I'm but a simple function.\n";
}