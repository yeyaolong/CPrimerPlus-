/**
  * 完成练习5，但这一次使用一个二维数组来存储输入 —— 3 年中每个月的销售量。程序将报告每年销售量以及三年的总销售量
  */

#include<iostream>
#include<array>
#include<string>

const int YearSize = 3;
const int MonthSize = 12;

int main596()
{

	const char* year[] = {
		"2020年",
		"2021年",
		"2022年"
	};

	const char* month[] = {
		"1月",
		"2月",
		"3月",
		"4月",
		"5月",
		"6月",
		"7月",
		"8月",
		"9月",
		"10月",
		"11月",
		"12月"
	};

	
	int monthSale[3][12] = {};
	int yearSale[] = {
		0,
		0,
		0
	};

	for (int i = 0; i < YearSize; i++)
	{
		for (int j = 0; j < MonthSize; j++)
		{
			std::cout << "请输入" << year[i] << month[j] << "营业额:" << std::endl;
			std::cin >> monthSale[i][j];
			yearSale[i] += monthSale[i][j];
		}
		
		
	}
	int totalYearSale = 0;
	for (int i = 0; i < YearSize; i++)
	{
		std::cout << year[i] << "收入" << yearSale[i] << std::endl;
		totalYearSale += yearSale[i];
	}
	std::cout << "3年收入:" << totalYearSale << std::endl;

	return 0;
}
