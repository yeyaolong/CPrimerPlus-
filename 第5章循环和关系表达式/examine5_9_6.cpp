/**
  * �����ϰ5������һ��ʹ��һ����ά�������洢���� ���� 3 ����ÿ���µ������������򽫱���ÿ���������Լ��������������
  */

#include<iostream>
#include<array>
#include<string>

const int YearSize = 3;
const int MonthSize = 12;

int main596()
{

	const char* year[] = {
		"2020��",
		"2021��",
		"2022��"
	};

	const char* month[] = {
		"1��",
		"2��",
		"3��",
		"4��",
		"5��",
		"6��",
		"7��",
		"8��",
		"9��",
		"10��",
		"11��",
		"12��"
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
			std::cout << "������" << year[i] << month[j] << "Ӫҵ��:" << std::endl;
			std::cin >> monthSale[i][j];
			yearSale[i] += monthSale[i][j];
		}
		
		
	}
	int totalYearSale = 0;
	for (int i = 0; i < YearSize; i++)
	{
		std::cout << year[i] << "����" << yearSale[i] << std::endl;
		totalYearSale += yearSale[i];
	}
	std::cout << "3������:" << totalYearSale << std::endl;

	return 0;
}
