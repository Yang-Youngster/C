#include "Test.h"
int main()
{
	std::cout << "�ֽ���������:" << sizeof(MyStruct) << std::endl;
	std::cout << "�ֽ���������:" << alignof(int) << std::endl;

	int num = 99;
	char name = 'YAG';

	int* numPrt = &num;
	char* nameprt = &name;
	std::cout << "Int  ����ָ����������ʽ��" << sizeof(numPrt) << std::endl;
	std::cout << "Char �ַ�ָ����������ʽ��" << sizeof(nameprt) << std::endl;
	std::cout << "Char �ַ�ָ����������ʽ��" << sizeof(char*) << std::endl;

	return 0;
}