/**
  * @description ��дһ���������е� main() ����һ���û�����ĺ������������ʶ�ֵΪ��������������Ӧ�Ļ����ʶ�ֵ���ó�������ĸ�ʽҪ���û����������¶�ֵ������ʾ�����
  * 
  * Please enter a Celsius value: 20
  * 20 degrees Celsius is 68 degrees Fahrenheit
  * 
  * ������ת����ʽ
  * 
  * �����¶� = 1.8 * �����¶�  + 32.0
  */

#include<iostream>
using namespace std;

double celsiusToFahrenheit(double celsius);

int main12()
{
	cout << "Please enter a Celsius value��";

	double celsisu = 0;

	cin >> celsisu;

	cout << celsisu << " degrees Celsius is " << celsiusToFahrenheit(celsisu) << " degrees Fahrenheit";


	return 0;
}

;

double celsiusToFahrenheit(double celsius)
{
	return celsius * 1.8 + 32.0;
}