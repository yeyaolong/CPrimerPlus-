/**
  * @description 编写一个程序，要求用户以度、分、秒的方式输入一个纬度，然后以度为单位显示该纬度。
  1 度为 60分，1 分等于 60秒，请以符号常量的方式输入这些中。对于每个输入值，应使用一个独立的变量存储它
  * 
  */
#include<iostream>

int main()
{
	using namespace std;
	float degree = 0; // 度
	float minute = 0; // 分
	float seconds = 0; // 秒

	cout << "请输入度：";
	
	cin >> degree;
	cout << endl;
	
	cout << "请输入分：";
	cin >> minute;
	cout << endl;

	cout << "请输入秒：";
	cin >> seconds;
	cout << endl;

	float degree2 = degree + minute / 60 + seconds / 60 / 60;

	cout << "计算结果为：" << degree2 << " 度";
}