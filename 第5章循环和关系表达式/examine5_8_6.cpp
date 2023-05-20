// 编写一个打印 1、2、4、8、16、32、64 的 for 循环，每轮循环都将计数变量的值乘以 2
#include<iostream>

int main586()
{
	using namespace std;
	for (int i = 1; i <= 64; i *= 2)
	{
		cout << i << endl;
	}

	return 0;
}