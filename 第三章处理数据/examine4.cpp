/**
  * @description ��дһ������Ҫ���û���������ʽ����������ʹ�� long �� long long �����洢����
  * Ȼ�����졢Сʱ�����Ӻ���ķ�ʽ��ʾ���ʱ�䣬ʹ�÷��ų�������ʾÿ���ж���Сʱ��ÿСʱ�ж��ٷ��ӣ��Լ�ÿ�����ж�����
  */
#include<iostream>
#include<cstring>
int main_examine4()
{
	using namespace std;

	long seconds = 0;
	cout << "����������" << endl;
	cin >> seconds;

	const int HOUR = 24;
	const int MINUTE = 60;
	const int SECONDS = 60;

	int day_result, hour_result, minute_result, seconds_result = { 0 };

	day_result = seconds / (HOUR * MINUTE * SECONDS);
	hour_result = (seconds - (HOUR * MINUTE * SECONDS * day_result)) / (MINUTE * SECONDS);
	minute_result = (seconds - (HOUR * MINUTE * SECONDS * day_result) - (MINUTE * SECONDS * hour_result)) / (SECONDS);
	seconds_result = (seconds - (HOUR * MINUTE * SECONDS * day_result) - (MINUTE * SECONDS * hour_result) - (SECONDS * minute_result));

	cout << seconds << " �� = " 
		<< day_result << " �죬" 
		<< hour_result << " Сʱ��" 
		<< minute_result << " ���ӣ�" 
		<< seconds_result << " ��" 
		<< endl;

	return 0;
}

