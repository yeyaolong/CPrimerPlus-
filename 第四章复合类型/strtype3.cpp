// �����嵥 4.9 strtype3
#include<iostream>
#include<string>	// make string class availabel
#include<cstring>	// C-style string library

int main()
{
	using namespace std;
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	// assigment for string objects and character arrays
	str1 = str2;	// copy str2 to str1
	strcpy_s(charr1, charr2);	// copy charr2 to charr1 ����ԭ���� strcpy ���Ǹ��ұ���˵����ȫ���ĳ� strcpy_s

	// appending for string objects and character arrays
	str1 += " paste";	// add paste to end of str1
	strcat_s(charr1, " juice");	// add juice to end of charr1	����ԭ���� strcat ���Ǹ��ұ���˵����ȫ���ĳ� strcat_s

	// finding the length of a string object and a C-style string
	int len1 = str1.size();	// obtain length of str1
	int len2 = strlen(charr1);	// obtain length of charr1

	cout << "The string " << str1 << " contains "
		<< len1 << " characters.\n";
	cout << "The string " << charr1 << " contains "
		<< len2 << " characters.\n";

	return 0;
}