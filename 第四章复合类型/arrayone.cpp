// �����嵥 4.1 arrayone.cpp

#include<iostream>

int main1()
{
	using namespace std;
	int yams[3]; // creates array with three elements
	yams[0] = 7;	// assign value to first element
	yams[1] = 8;
	yams[2] = 6;

	int yamcosts[3] = { 20, 30, 5 };
	// NOTE: if your c++ compiler or translator can't initialize
	// this array, use static int yamcosts[3] instead of 
	// int yamcosts[3]

	cout << "Total yams = ";
	cout << yams[0] + yams[1] + yams[2] << endl;
	cout << "The package with " << yams[1] << " yams costs ";
	cout << yamcosts[1] << " cents per yam.\n";
	int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
	total = total + yams[2] * yamcosts[2];
	cout << "The total yam expense is " << total << " centes.\n";

	cout << "\nSize of yams array = " << sizeof yams;
	cout << " bytes.\n";
	cout << "Size of one element = " << sizeof yams[0];

	cout << " bytes.\n";

	return 0;
}