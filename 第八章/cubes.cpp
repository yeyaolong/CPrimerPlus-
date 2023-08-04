// �����嵥 8.5 cubes -- regular and reference arguments
#include<iostream>
#include"cubes.h"

int main()
{
	using namespace std;
	double x = 3.0;

	cout << cube(x);
	cout << " = cube of " << x << endl;
	cout << refcube(x);

	cout << " = cube of " << x << endl;

	return 0;
}

double cube(double a)
{
	a *= a * a;
	return a;
}

double refcube(double& ra)
{
	ra *= ra * ra;
	return ra;
}