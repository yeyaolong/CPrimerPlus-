/**
  * ��дһ��Ҫ���û��������������ĳ��򡣸ó��򽫼��㲢�������������֮�䣨�������������������������ĺ͡�
  * ��������������С�����������û�������� 2 �� 9�������ָ�� 2 ~ 9 ֮�����������ĺ�Ϊ 44
  */
#include<iostream>
int main591()
{
	using namespace std;
	cout << "������һ����С������ ";
	int min;
	cin >>  min;
	cout << endl << "������һ���ϴ������";
	int max;
	cin >> max;

	int result = 0;
	for (int i = min; i <= max; i++)
	{
		result += i;
	}
	cout << "������Ϊ��" << result;

	return 0;
}
