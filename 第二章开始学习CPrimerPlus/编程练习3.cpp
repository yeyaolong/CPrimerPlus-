/**
  * @description 编写一个C++程序，它使用3个用户定义的函数(包括 main() )，并生成下面的输出
  * Three blind mice
  * Three blind mice
  * See how they run
  * See how they run
  * 
  * 其中一个函数要调用两次， 该函数生成前两行；另一个函数也被调用两次，并生成其余的输出
  **/

#include<iostream>

using namespace std;

void generateMice();
void generateRun();

int main10()
{
	generateMice();
	generateMice();
	generateRun();
	generateRun();

	return 0;
}

void generateMice()
{
	cout << "Three blind mice" << endl;
}

void generateRun()
{
	cout << "See how they run" << endl;
}


