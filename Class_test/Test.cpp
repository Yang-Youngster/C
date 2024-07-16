#include "Test.h"
int main()
{
	std::cout << "字节类型数量:" << sizeof(MyStruct) << std::endl;
	std::cout << "字节类型数量:" << alignof(int) << std::endl;

	int num = 99;
	char name = 'YAG';

	int* numPrt = &num;
	char* nameprt = &name;
	std::cout << "Int  数量指针数量的形式：" << sizeof(numPrt) << std::endl;
	std::cout << "Char 字符指针数量的形式：" << sizeof(nameprt) << std::endl;
	std::cout << "Char 字符指针数量的形式：" << sizeof(char*) << std::endl;

	return 0;
}