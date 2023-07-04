// �����嵥 7.6 arr2.cpp -- function with an array argument
#include<iostream>
const int ArSize = 8;
int sum_arr2(int arr[], int n);

int main6()
{
	int cookies[ArSize] = { 1, 2, 4, 8, 16,32, 64, 128 };

	std::cout << cookies << " = array address,";
	std::cout << sizeof cookies << "= sizeof cookies \n";

	int sum = sum_arr2(cookies, ArSize);
	std::cout << "Total cookies eaten: " << sum << std::endl;


	sum = sum_arr2(cookies, 3);	// a lie
	std::cout << "first three eaters ate " << sum << " cookies.\n";

	sum = sum_arr2(cookies + 4, 4);	// another lie
	std::cout << "Last four eaters ate " << sum << " cookies\n";


	return 0;
}

int sum_arr2(int arr[], int n)
{
	int total = 0;
	std::cout << arr << " = arr, ";

	std::cout << sizeof arr << " = sizeof arr\n";
	for (int i = 0; i < n; i++)
	{
		total = total + arr[i];
	}

	return total;
}