/**
  * @description ��дһ�������� main() ����һ���û�����ĺ������Թ���ֵΪ�����������ض�Ӧ���ĵ�λ��ֵ�����ó�������ĸ�ʽҪ���û��������ֵ������ʾ�����
  * Enter the number of light years: 5.2
  * 4.2 light years = 266508 astronmical units.
  * 
  * ���ĵ�λ�Ǵӵ���̨����ƽ�����루Լ 150000000 ����� 93000000 Ӣ��������ǹ�һ���ߵľ��루Լ 10���ڹ���� 6 ����Ӣ�
  * ����̫���⣬����ĺ��Ǵ�Լ������� 4.2 ���꣩����ʹ�� double ����(�μ������嵥 2.4 )��ת����ʽΪ��
  * 
  * 1���� = 63240���ĵ�λ��
  **/

#include<iostream>
using namespace std;


double lightYearsToAstronmicalUnits(double lightYears);

int main13()
{
	double lightYears;

	cout << "Enter the number of light years: ";
	
	cin >> lightYears;
	
	cout << lightYears << " light years = " << lightYearsToAstronmicalUnits(lightYears) << " astronmical units" << endl;


	return 0;
}

double lightYearsToAstronmicalUnits(double lightYears)
{
	return lightYears * 63250;
}