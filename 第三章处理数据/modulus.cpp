// �����嵥 3.12
#include<iostream>
int main12()
{
	using namespace std;
	const int Lbs_per_stn = 14;
	int lbs;

	cout << "Enter your weight in pounds: ";

	cin >> lbs;
	int stone = lbs / Lbs_per_stn; // whole stone
	int pounds = lbs % Lbs_per_stn;	// remainder in pounds
	cout << lbs << " pounds ard " << stone
		<< " stone, " << pounds << " pound(s) \n";

	return 0;
}