/**
  * @description 编写一个程序，其中的 main() 调用一个用户定义的函数（以摄氏问度值为参数，并返回相应的华氏问度值）该程序按下面的格式要求用户输入摄氏温度值，并显示结果：
  * 
  * Please enter a Celsius value: 20
  * 20 degrees Celsius is 68 degrees Fahrenheit
  * 
  * 下面是转化公式
  * 
  * 华氏温度 = 1.8 * 摄氏温度  + 32.0
  */

#include<iostream>
using namespace std;

double celsiusToFahrenheit(double celsius);

int main12()
{
	cout << "Please enter a Celsius value：";

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