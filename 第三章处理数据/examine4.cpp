/**
  * @description 编写一个程序，要求用户以整数方式输入秒数（使用 long 或 long long 变量存储），
  * 然后以天、小时、分钟和秒的方式显示这段时间，使用符号常量来表示每天有多少小时、每小时有多少分钟，以及每分钟有多少秒
  */
#include<iostream>
#include<cstring>
int main_examine4()
{
	using namespace std;

	long seconds = 0;
	cout << "请输入秒数" << endl;
	cin >> seconds;

	const int HOUR = 24;
	const int MINUTE = 60;
	const int SECONDS = 60;

	int day_result, hour_result, minute_result, seconds_result = { 0 };

	day_result = seconds / (HOUR * MINUTE * SECONDS);
	hour_result = (seconds - (HOUR * MINUTE * SECONDS * day_result)) / (MINUTE * SECONDS);
	minute_result = (seconds - (HOUR * MINUTE * SECONDS * day_result) - (MINUTE * SECONDS * hour_result)) / (SECONDS);
	seconds_result = (seconds - (HOUR * MINUTE * SECONDS * day_result) - (MINUTE * SECONDS * hour_result) - (SECONDS * minute_result));

	cout << seconds << " 秒 = " 
		<< day_result << " 天，" 
		<< hour_result << " 小时，" 
		<< minute_result << " 分钟，" 
		<< seconds_result << " 秒" 
		<< endl;

	return 0;
}

