/**
  * Daphne �� 10% �ĵ���Ͷ���� 100 ��Ԫ��Ҳ����˵��ÿһ���������Ͷ�ʶ�� 10%����ÿ�� 10 ��Ԫ��
  *
  * ��Ϣ = 0.10 X ԭʼ���
  *
  * �� Cleo �� 5% �ĸ���Ͷ���� 100 ��Ԫ��Ҳ����˵����Ϣ�ǵ�ǰ��������õ���Ϣ����5%��
  *
  *	��Ϣ = 0.05 X ��ǰ���
  *
  *	Cleo �ڵ�һ��Ͷ�� 100 ��Ԫ��ӯ���� 5%�����õ���105��Ԫ����һ���� 105��Ԫ�� 5% �������� �� 5.25 ��Ԫ�� �������ơ�
  *
  * ���дһ�����򣬼��������� Cleo ��Ͷ�ʼ�ֵ���ܳ��� Daphne ��Ͷ�ʼ�ֵ������ʾ��ʱ�����˵�Ͷ�ʼ�ֵ��
  */

#include<iostream>

int main594()
{
	float daphneMoney = 100.0f;
	const float DaphneRate = 0.1f;
	float cleoMoney = 100.0f;
	const float CleoRate = 0.05f;
	int year = 0;
	while (cleoMoney <= daphneMoney)
	{
		year++;
		daphneMoney = 100 * DaphneRate + daphneMoney;
		cleoMoney = cleoMoney + cleoMoney * CleoRate;
	}
	std::cout << "��" << year << "��" << std::endl;
	std::cout << "Daphne's Money = " << daphneMoney << std::endl;
	std::cout << "Cleo's Money = " << cleoMoney << std::endl;

	return 0;
}