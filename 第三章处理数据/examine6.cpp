/**
  * @description ��дһ������Ҫ���û�����������̣�Ӣ���ʹ�������������أ���
  * Ȼ��ָ������������һ���ص���̡�
  * ���Ը�⣬Ҳ�����ó���Ҫ���û��Թ���Ϊ��λ������룬������Ϊ��λ������������
  * ����ָ��ŷ�޷��Ľ��������ÿ 100 ����ĺ�����������
  */
#include<iostream>
#include<cstring>

int main_examine6()
{
	using namespace std;
	float distance = 0.0;
	float gasoline = 0.0;
	cout << "������������̣�Ӣ�_____\b\b\b\b\b";
	cin >> distance;
	cout << "������ʹ�������������أ�_____\b\b\b\b\b";
	cin >> gasoline;

	cout << "����ÿӢ�����ģ�" << gasoline / distance << " ��������";

	return 0;
}