// ≥Ã–Ú«Âµ• 7.4 lotto.cpp -- probability of winning
#include<iostream>
// Note: some implementations require double instead of long double

long double probability(unsigned number, unsigned picks);

int main4()
{
	using namespace std;
	double total, choices;
	cout << "Enter the total number of choices on the game card and\n"
		"the number of picks allowed:\n";
	while ((cin >> total >> choices) && choices <= total)
	{
		cout << "You have one change in ";
		cout << probability(total, choices);	// compute the odds
		cout << " of winning .\n";
		cout << "Next two numbers (q to quit): ";
	}
	cout << "bye\n";
	return 0;
}

// the following function calculates the probablity of picking picks
// numbers correctly form numbers choices
long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0;	// here come some local variables
	long double n;
	unsigned p;

	for (n = numbers, p = picks; p > 0; n--, p--)
	{
		result = result * n / p;
	}

	return result;
}