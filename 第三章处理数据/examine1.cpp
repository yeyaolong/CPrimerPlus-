/**
  * @description ��дһ��С����Ҫ���û�ʹ��һ������ָ���Լ�����ߣ���λΪӢ�磩��
  * Ȼ�����ת��ΪӢ�ߺ�Ӣ�硣�ó���ʹ���»����ַ���ָʾ����λ�á����⣬ʹ��һ�� const ���ų�������ʾת�����ӡ�
  * 1 Ӣ�� = 12 Ӣ��
  * 
  */
#include<iostream>

int main_examine1()
{
	using namespace std;
	cout << "�����������ߣ�Ӣ�磩______\b\b\b\b\b\b";

	int height = 0;
	cin >> height;
	float result = height / 12.0f;

	cout << "\nӢ��ת����Ӣ�磺" << height << "Ӣ�� = " << result << " Ӣ��";

	return 0;
}