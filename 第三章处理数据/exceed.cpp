// ≥Ã–Ú«Âµ• 3.2 exceed.cpp -- exceeding some integer limits
#include<iostream>
#define ZERO 0;
#include<climits>;

int main2()
{
	using namespace std;
	short sam = SHRT_MAX;	// initialize a variable to max value
	unsigned short sue = sam; // okay if variable sam already define

	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl
		<< "Add $1 to each account." << endl << "Now ";
	sam = sam + 1;
	sue = sue + 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited.\nPoor Sam!" << endl;

	sam = ZERO;
	sue = ZERO;

	cout << "Sam has " << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl;
	cout << "Task $1 form each account." << endl << "Now ";
	sam = sam - 1;
	sue = sue - 1;

	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl << "Lucky Sue!" << endl;

	return 0;
}