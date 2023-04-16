// �����嵥4.19 addpntrs.cpp -- pointer ddition
#include<iostream>
int main19()
{
	using namespace std;
	double wages[3] = { 10000.0, 20000.0, 30000.0 };
	short stacks[3] = { 3, 2, 1 };

	// Here are two ways to get the address of an array
	double* pw = wages;	// name of an array = address;
	// stacks[0] �൱�� *stacks�� Ҳ�� stacks ��ָ������� 0 λԪ�ص�ָ��, stacks[0] �൱�ڵ���
	// *stacks��Ҳ���� stacks ���ָ����н�����
	// &stacks[0] �൱��&(*stacks)��Ҳ���� �Ȼ�ȡ �����0λԪ��ֵ��Ȼ���ȡ���ֵ�ĵ�ַ,
	// Ȼ��������ַ��ֵ�� ps ���ָ��
	short* ps = &stacks[0];	// or use address operator
	

	// with array element
	cout << "pw = " << pw << ", *pw = " << *pw << endl;	// ��ַ,10000.0
	pw = pw + 1;	// ָ�����㣬��ַ + sizeof(double)����ʱ pw ָ������ڶ�λ
	cout << "add 1 to the pw pointer:\n";
	cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";	// ��ַ + sizeof(double)��20000.0


	cout << "ps = " << ps << ", *ps = " << *ps << endl;	// ��ַ��3
	ps = ps + 1;	// ָ�����㣬��ַ + sizeof(short)����ʱ ps ָ������ڶ�λ
	cout << "add 1 to the ps pointer:\n";
	cout << "ps = " << ps << ", *ps = " << *ps << "\n\n"; // ��ַ + sizeof(short)��2

	cout << "access two elements with array notation\n";
	cout << "stacks[0] = " << stacks[0]				// �൱�� *stacks, ���� 3
		<< ", stacks[1] = " << stacks[1] << endl;	// �൱�� *(stacks+1)������ 2 

	cout << "access tow elements with pointer notation\n";
	cout << "*stacks = " << *stacks					// 3
		<< ", *(stacks + 1) = " << *(stacks + 1) << endl;	// 2

	cout << sizeof(wages) << " = size of wages array\n"; // 3 * sizeof(double) �ֽ�,�� 24,��Ϊwages ��һ��double����������3��Ԫ��
	cout << sizeof(pw) << " = size of pw pointer\n";// sizeof(short) �ֽڣ� ��2����Ϊ pw ��һ��short����ָ��

	cout << "sizeof double = " << sizeof(double) << endl;	// 8
	cout << "sizeof short = " << sizeof(short) << endl;	// 2
	return 0;
}
