/**
  * @description ��дһ������Ҫ���û�����ȫ��ǰ���˿ڣ����������ҵ��˿ڣ���
  * ����Щ��Ϣ�洢�� long long �����У����ó�����ʾ���������������ң����˿�ռȫ���˿ڵİٷֱȡ�
  */
#include<iostream>

int main_examine5()
{
	using namespace std;

	long long global_population = 0;
	long long US_population = 0;
	cout << "������ȫ��ǰ�˿�_____\b\b\b\b\b";
	cin >> global_population;
	cout << endl;
	cout << "������������ǰ�˿�_____\b\b\b\b\b";
	cin >> US_population;
	cout << endl;
	double result = double(US_population) / double(global_population) * 100;

	cout << "����ռȫ�����˿�" << result << "%" << endl;

	return 0;
}