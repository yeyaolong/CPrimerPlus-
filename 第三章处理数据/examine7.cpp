/**
  * @description ��дһ������Ҫȥ�û�����ŷ�޷������������������ÿ 100 �������ĵ�����������������
  * Ȼ����ת��Ϊ�������ĺ���������ÿ���ض���Ӣ�
  * ע�⣬����ʹ�ò�ͬ�ĵ�λ�����⣬��������������/ȼ�ϣ���ŷ�޷�����ȼ��/���룩�෴��
  * 100 ������� 62.14 Ӣ�1 ���ص��� 3.875 ������ˣ�19mpg ��Լ�� 12.4l/100km��127mpg ��Լ�� 8.71/100km��
  */

#include<iostream>
#include<cstring>

int main()
{
	using namespace std;
	
	float gasoline = 0.0;	// ��
	float gasoline_Europe = 0.0;	// ����
	const float GALLON_TRANSFORM_TO_LITRE = 3.875; // 1 ���ص��� 3.875 ��
	const float KM_TRANSFORM_TO_MILES = 62.14;	// 100 ������� 62.14 Ӣ��

	cout << "������������������ÿ100����������������������" << endl;
	cin >> gasoline;	// ÿ100��������������������
	
	float f1 = gasoline / GALLON_TRANSFORM_TO_LITRE; // ÿ100�������������������أ� = ÿ 62.14 Ӣ�����ĵ������������أ�
	float f2 = f1 / KM_TRANSFORM_TO_MILES; // ÿ1Ӣ�����������������أ�
	
	// gasoline_Europe = f1 * GALLON_TRANSFORM_TO_LITRE / ();
	cout << "ת��������������" << endl;
	cout << 1/f2 << " mpg";
	return 0;
}