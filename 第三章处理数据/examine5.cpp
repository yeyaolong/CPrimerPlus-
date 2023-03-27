/**
  * @description 编写一个程序，要求用户输入全球当前的人口（或其它国家的人口）。
  * 将这些信息存储在 long long 变量中，并让程序显示美国（或其它国家）的人口占全球人口的百分比。
  */
#include<iostream>

int main_examine5()
{
	using namespace std;

	long long global_population = 0;
	long long US_population = 0;
	cout << "请输入全球当前人口_____\b\b\b\b\b";
	cin >> global_population;
	cout << endl;
	cout << "请输入美国当前人口_____\b\b\b\b\b";
	cin >> US_population;
	cout << endl;
	double result = double(US_population) / double(global_population) * 100;

	cout << "美国占全世界人口" << result << "%" << endl;

	return 0;
}