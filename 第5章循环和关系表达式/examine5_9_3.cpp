// ��дһ��Ҫ���û��������ֵĳ���ÿ������󣬳��򶼽����浽ĿǰΪֹ������������ۼƺ͡����û����� 0 ʱ�����������
#include<iostream>

int main593()
{
	float num = 0.0f;
	float result = 0.0f;
	do {
		std::cout << "������һ������" << std::endl;
		std::cin >> num;
		result += num;
		std::cout << "Ŀǰ�������ݵĺ�Ϊ��" << result << std::endl;;
	} while (num != 0.0f);


	return 0;
}