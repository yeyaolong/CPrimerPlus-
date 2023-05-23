// 编写一个要求用户输入数字的程序，每次输入后，程序都将报告到目前为止，所有数组的累计和。当用户输入 0 时，程序结束。
#include<iostream>

int main593()
{
	float num = 0.0f;
	float result = 0.0f;
	do {
		std::cout << "请输入一个数字" << std::endl;
		std::cin >> num;
		result += num;
		std::cout << "目前输入数据的和为：" << result << std::endl;;
	} while (num != 0.0f);


	return 0;
}