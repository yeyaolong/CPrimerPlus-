/**
  * @description ��дһ������Ҫ���û��Զȡ��֡���ķ�ʽ����һ��γ�ȣ�Ȼ���Զ�Ϊ��λ��ʾ��γ�ȡ�
  1 ��Ϊ 60�֣�1 �ֵ��� 60�룬���Է��ų����ķ�ʽ������Щ�С�����ÿ������ֵ��Ӧʹ��һ�������ı����洢��
  * 
  */
#include<iostream>

int main()
{
	using namespace std;
	float degree = 0; // ��
	float minute = 0; // ��
	float seconds = 0; // ��

	cout << "������ȣ�";
	
	cin >> degree;
	cout << endl;
	
	cout << "������֣�";
	cin >> minute;
	cout << endl;

	cout << "�������룺";
	cin >> seconds;
	cout << endl;

	float degree2 = degree + minute / 60 + seconds / 60 / 60;

	cout << "������Ϊ��" << degree2 << " ��";
}