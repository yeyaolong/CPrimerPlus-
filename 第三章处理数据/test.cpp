#include<iostream>

int main_test()
{
	using namespace std;
	double x1 = 10.1;
	double x2 = 12.8;

	int result = int(x1) + int(x2);
	int result2 = int(x1 + x2);

	cout << result << endl;
	cout << result2 << endl;



	return 0;
}