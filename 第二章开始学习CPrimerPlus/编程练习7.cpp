/**
  * @description  ��дһ������Ҫ���û�����Сʱ���ͷ��������� main() �����У���������ֵ���ݸ�һ�� void ���������������������ĸ�ʽ��ʾ������ֵ��
  * Enter the number of hours: 9
  * Enter the number of minutes: 28
  * Time: 9:28
  **/

#include<iostream>
using namespace std;

void showTime(int hours, int minutes);

int main()
{
	int hours, minutes;

	cout << "Enter the number of hours�� ";
	cin >> hours;
	cout << "\n Enter the number of minutes�� ";
	cin >> minutes;
	cout << endl;

	showTime(hours, minutes);
	return 0;
}

void showTime(int hours, int minutes)
{
	cout << "Time�� " << hours << "��" << minutes;
}