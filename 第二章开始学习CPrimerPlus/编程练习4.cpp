/**
  * @description ��дһ���������û����������䣬Ȼ����ʾ������������ٸ��£�������ʾ��
  * 
  * Enter your age: 29
  *
  */

#include<iostream>

using namespace std;

int yearToMonth(int year);

int main11()
{
	int age = 0;

	cout << "Enter your age�� ";
	cin >> age;
	cout << "month = " << yearToMonth(age) << endl;


	return 0;
}

int yearToMonth(int year)
{
	return year * 12;
}