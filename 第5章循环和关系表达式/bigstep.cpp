// �����嵥 5.5 bigstep.cpp -- count as directed
#include<iostream>
int main5()
{
	using std::cout;	// a using declaration
	using std::cin;
	using std::endl;

	cout << "Enter an interger: ";
	int by;
	cin >> by;
	cout << "Counting by " << by << "s:\n";
	for (int i = 0; i < 100; i = i + by)
	{
		cout << i << endl;
	}
	return 0;
}