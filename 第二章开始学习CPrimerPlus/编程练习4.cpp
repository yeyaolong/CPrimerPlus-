/**
  * @description 编写一个程序，让用户输入其年龄，然后显示该年龄包含多少个月，如下所示：
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

	cout << "Enter your age： ";
	cin >> age;
	cout << "month = " << yearToMonth(age) << endl;


	return 0;
}

int yearToMonth(int year)
{
	return year * 12;
}