/**
  * 编写一个要求用户输入两个整数的程序。该程序将计算并输出这两个整数之间（包括这两个整数）所有整数的和。
  * 这里假设先输入较小的数。例如用户输入的是 2 和 9，则程序将指出 2 ~ 9 之间所有整数的和为 44
  */
#include<iostream>
int main591()
{
	using namespace std;
	cout << "请输入一个较小的数： ";
	int min;
	cin >>  min;
	cout << endl << "请输入一个较大的数：";
	int max;
	cin >> max;

	int result = 0;
	for (int i = min; i <= max; i++)
	{
		result += i;
	}
	cout << "计算结果为：" << result;

	return 0;
}
