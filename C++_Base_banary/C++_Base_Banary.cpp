#include <iostream>
#include <string>
#include <vector>
using namespace std;
using std::vector;
void main()
{
	//测试二分搜索法
	cout << "YangLuo" << endl;
	//集合方法
	vector<int> list = { 1,2,3,4,5,6,7,8,9,9,9,9,9,9,9,9,11,13,14,15,16,17 };
	//头部
	auto head = list.cbegin();
	//尾部测试
	auto tail = list.cend();
	int inputvalue;
	cout << "输入查询的数字" << endl;
	cin >> inputvalue;
	auto mind = (head + (tail - head) / 2);
	int numbers = 1;
	cout << (tail != mind) << endl;
	while (tail >= mind)
	{
		if (*mind > inputvalue)
		{
			tail = mind - 1;
			cout << "第" << numbers << "查找" << endl;
		}
		else if (*mind < inputvalue) {
			head = mind + 1;
			cout << "第" << numbers << "查找" << endl;
		}
		else {
			cout << "查找成功" << endl;
			break;
		}
		numbers++;
		mind = head + (tail - head) / 2;
	}
	cout << (tail != mind) << endl;
}