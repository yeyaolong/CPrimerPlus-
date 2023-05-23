// ʹ�� array ���󣨶��������飩�� long double �������� long long�����±�д�����嵥 5.4�������� 100! ��ֵ��
// �����嵥 5.4 formore.cpp -- more looping with for

#include<iostream>
#include<array>
const int ArSize = 100;	// example of external declaration

int main592()
{
	
	std::array<long double, ArSize> factorials;
	factorials[1] = factorials[0] = 1;
	for (int i = 2; i < ArSize; i++)
	{
		factorials[i] = i * factorials[i - 1];
	}
	std::cout << factorials[ArSize - 1] << std::endl;

	return 0;
}