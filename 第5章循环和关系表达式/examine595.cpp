/**
  * ����Ҫ���ۡ�C++ For Fools��һ�飬����ȫ��ÿ���µ���������ͼ�����������������۶��
  * ����ͨ��ѭ����ʹ�ó�ʼ��Ϊ�·��ַ����� char* ���飨�� string �������飩���½�����ʾ��������������ݴ�����һ�� int �����С�
  * Ȼ�󣬳�����������и�Ԫ�ص���������������һ������������
  */

#include<iostream>
#include<array>
#include<string>

int main595()
{

	/*const char* month[] = {
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
	};*/

	std::string month[] = {
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
	std::array<int, 12> monthSale;
	const int len = sizeof(month) / sizeof(month[0]);
	// std::cout << sizeof(month) << " " << month->size() << " " << sizeof(month[0]) << " " << len << std::endl;
	int yearSale = 0;
	for (int i = 0; i < len; i++)
	{      
		std::cout << "������" << month[i] <<  "Ӫҵ��:" << std::endl;
		std::cin >> monthSale[i];
		yearSale += monthSale[i];
	}

	std::cout << "������:" << yearSale << std::endl;

	return 0;
}
