// �����嵥 5.20 netsted.cpp -- netsted loops and 2-D array
#include<iostream>
const int Cities = 5;
const int Years = 4;

int main20()
{
	using namespace std;
	const char* cities[Cities] =	// array of pointers
	{
		"Gribble City",
		"Gribbletown",
		"New Gribble",
		"San Gribble",
		"Gribble Visita"
	};

	int maxtemps[Years][Cities] =	// 2-D Array
	{
		{ 96, 100, 87, 101, 105 },	// values for maxtemps[0]
		{ 96, 98, 91, 107, 104 },	// values for maxtemps[1]
		{ 97, 101, 93, 108, 107 },	// values for maxtemps[2]
		{ 98, 103, 95, 109, 108 }	// values for maxtemps[3
	};


	cout << "Maximum temperatures for 2008 - 2011\n\n";
	for (int city = 0; city < Cities; ++city)
	{
		cout << cities[city] << ":\t";
		for (int year = 0; year < Years; ++year)
		{
			cout << maxtemps[year][city] << "\t";
		}
		cout << endl;
	}

	return 0;
}
