/**
  * @description ��дһ��С����Ҫ���Լ�Ӣ�߼�Ӣ��ķ�ʽ��������ߣ����԰�Ϊ��λ���������ء���ʹ�������������洢��Щ��Ϣ����
  * �ó��򱨸���BMI��Body Mass Index, ����ָ������
  * Ϊ�˼���BMI���ó�����Ӣ��Ķʽָ���û�����ߣ�1Ӣ�� Ϊ 12 Ӣ�磩��������Ӣ��Ϊ��λ�����ת��Ϊ����Ϊ��λ����ߣ�1 Ӣ�� = 0.0254 �ף���
  * Ȼ�󣬽��԰�Ϊ��λ������ת��Ϊ��ǧ��Ϊ��λ�����أ�1 ǧ�� = 2.2 ������
  * ��󣬼�����Ӧ��BMI�������أ�ǧ�ˣ��������(��)��ƽ�����÷��ų�����ʾ��ת�����ӡ�
  * 
  */

#include <iostream>
#include <cmath>
int main_examine2()
{
	using namespace std;
	
	cout << "������������(Ӣ�߲���)" << endl;
	float foot = 0;
	cin >> foot;
	cout << "�����������ߣ�Ӣ�粿�֣�" << endl;
	float inch;
	cin >> inch;
	cout << "������������أ�����" << endl;
	float weight = 0;
	cin >> weight;

	const int INCH_FACTOR = 12;
	const float METER_FACTOR = 0.0254;
	const float WEIGHT_FACTOR = 2.2;

	float heightInch = inch + foot * INCH_FACTOR;	// �� Ӣ�� Ϊ��λ�����
	float heightMeter = heightInch * METER_FACTOR;	// �� �� Ϊ��λ�����
	
	float weightKg = weight / WEIGHT_FACTOR; // �� ǧ�� Ϊ��λ������

	cout << "�������Ϊ��" << heightInch << " Ӣ�磬"
		<< heightMeter << " ��" << endl;
	cout << "��������Ϊ��" << weight << " ����"
		<< weightKg << " ǧ��" << endl;

	cout << "BMI = " << pow((weightKg / heightMeter), 2);


	return 0;
}