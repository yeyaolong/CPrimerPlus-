// �����嵥5.2 num_test.cpp -- use numeric test in for loop
#include<iostream>
int main2()
{
	using namespace std;
	cout << "Enter the starting countdown value: ";
	int limit;
	cin >> limit;
	int i;
	for (i = limit; i; i--) {
		cout << "i = " << i << "\n";
	}
	cout << "Done now that i = " << i << "\n";
	
	return 0;
}