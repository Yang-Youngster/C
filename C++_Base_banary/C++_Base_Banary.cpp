#include <iostream>
#include <string>
#include <vector>
using namespace std;
using std::vector;
void main()
{
	//���Զ���������
	cout << "YangLuo" << endl;
	//���Ϸ���
	vector<int> list = { 1,2,3,4,5,6,7,8,9,9,9,9,9,9,9,9,11,13,14,15,16,17 };
	//ͷ��
	auto head = list.cbegin();
	//β������
	auto tail = list.cend();
	int inputvalue;
	cout << "�����ѯ������" << endl;
	cin >> inputvalue;
	auto mind = (head + (tail - head) / 2);
	int numbers = 1;
	cout << (tail != mind) << endl;
	while (tail >= mind)
	{
		if (*mind > inputvalue)
		{
			tail = mind - 1;
			cout << "��" << numbers << "����" << endl;
		}
		else if (*mind < inputvalue) {
			head = mind + 1;
			cout << "��" << numbers << "����" << endl;
		}
		else {
			cout << "���ҳɹ�" << endl;
			break;
		}
		numbers++;
		mind = head + (tail - head) / 2;
	}
	cout << (tail != mind) << endl;
}