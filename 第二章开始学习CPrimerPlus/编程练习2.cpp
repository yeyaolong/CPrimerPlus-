/**
  * @description ��дһ��C++������Ҫ���û�����һ�� �� long Ϊ��λ�ľ��룬Ȼ����תΪ��(һ long ���� 220 ��)
  *
  **/

#include<iostream>

double longToMa(double d);

int main9()
{
	using namespace std;
	double beforeTrans = 0.0;
	cout << "������Ҫת����ֵ:" << endl;
	cin >> beforeTrans;

	cout << "ת�����ֵΪ:" << longToMa(beforeTrans);

	return 0;
}


double longToMa(double beforeTrans)
{
	double result = 0.0;

	result = beforeTrans * 220;

	return result;

}