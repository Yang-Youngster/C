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

	//�ر������
	std::cout << "get this value" << intNumber_1 << std::endl;
	std::cout << "and" << intNumber_2;
	std::cout << "is" << intNumber_1 + intNumber_2 << std::endl;

	//����
	std::cout << "/*";
	std::cout << "*/";

	int local_int = 110;
	std::cout << local_int;

	std::cout << global_int;
	//std::cout << "\n";
	//int sum = 0, value = 0;
	//   //���Լ�������
	//std::cout << "������������ \n";

	//while (std:: cin>>value)
	//{
	//	sum += value;
	//	std::cout << sum << std::endl;
	//}
	int global_double = 145678.54;
	int global_temp = global_double;
	std::cout << global_double << std::endl;
	std::cout << global_temp << std::endl;

	//���Գ�ʼ������ֵ

	int& test_key = local_int;
	std::cout << test_key << std::endl;

	//ʹ�õ�����
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