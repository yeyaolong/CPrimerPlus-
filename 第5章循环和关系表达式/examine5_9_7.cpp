/**
  * ���һ����Ϊ car �Ľṹ�������洢�����й���������Ϣ��
  * �����̣��洢���ַ������ string �����е��ַ�������������ݣ���������
  * ��дһ���������û�ѯ���ж�����������
  * ��󣬳���ʹ�� new ������һ������Ӧ������ car �ṹ���ɵĶ�̬���顣
  * ��������������ʾ�û�����ÿ�����������̣������ɶ�����ʹ��ɣ��������Ϣ����ע�⣬����Ҫ�ر�С�ģ���Ϊ���������ȡ��ֵ���ַ������μ��� 4 �£�
  */

#include<iostream>
struct CarStruct {
	char* makeCompany;
	char* makeYear;
};

int main()
{
	int catalogCount = 0;
	CarStruct* cars[2];
	std::cout << "How many cars do you wish to catalog?" << std::endl;
	std::cin >> catalogCount;
	for (int i = 0; i < catalogCount; i++)
	{
		std::cout << "Car #" << i << ":" << std::endl;
		std::cout << "Plear enter the make: ";
		char* makeCompany;
		char makeCompanyCh;
		do {
			std::cin.get(makeCompanyCh);
		} while(makeCompanyCh != '\n')
		
		

	}
	return 0;
}