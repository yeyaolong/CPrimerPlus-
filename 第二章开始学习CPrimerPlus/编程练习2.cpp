/**
  * @description 编写一个C++程序，它要求用户输入一个 以 long 为单位的距离，然后将它转为码(一 long 等于 220 码)
  *
  **/

#include<iostream>

double longToMa(double d);

int main9()
{
	using namespace std;
	double beforeTrans = 0.0;
	cout << "请输入要转化的值:" << endl;
	cin >> beforeTrans;

	cout << "转化后的值为:" << longToMa(beforeTrans);

	return 0;
}


double longToMa(double beforeTrans)
{
	double result = 0.0;

	result = beforeTrans * 220;

	return result;

}