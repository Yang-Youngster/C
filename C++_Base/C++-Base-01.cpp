#include <iostream>

using namespace std;
using std::cin;
using std::cout;
std::string global_str;

int global_int;
int global_double = 45678.54;

int main()
{
	std::cout << "How do you feel" << std::endl;
	int intNumber_1, intNumber_2;
	std::cin >> intNumber_1 >> intNumber_2;
	std::cout << intNumber_1 << std::endl;
	std::cout << intNumber_2 << std::endl;

	//特别的情形
	std::cout << "get this value" << intNumber_1 << std::endl;
	std::cout << "and" << intNumber_2;
	std::cout << "is" << intNumber_1 + intNumber_2 << std::endl;

	//测试
	std::cout << "/*";
	std::cout << "*/";

	int local_int = 110;
	std::cout << local_int;

	std::cout << global_int;
	//std::cout << "\n";
	//int sum = 0, value = 0;
	//   //测试键盘输入
	//std::cout << "键盘输入数据 \n";

	//while (std:: cin>>value)
	//{
	//	sum += value;
	//	std::cout << sum << std::endl;
	//}
	int global_double = 145678.54;
	int global_temp = global_double;
	std::cout << global_double << std::endl;
	std::cout << global_temp << std::endl;

	//测试初始化变量值

	int& test_key = local_int;
	std::cout << test_key << std::endl;

	//使用迭代器
	string name("Luo Yang");
	auto it = name.begin();

	while (it != name.end())
	{
		*it = toupper(*it);
		cout << *it;
		++it;
	}
	return 0;
}