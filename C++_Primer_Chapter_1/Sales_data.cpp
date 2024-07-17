#include "Sales_data.h"

Sales_data& Sales_data::combine(const Sales_data& lhs)
{
	//��ͬ�����˵����������ܼ۸����
	amount += lhs.amount;
	totalPrice += lhs.totalPrice;
	return *this;
}
/**
*
* ��ͬ�����
*
*/
Sales_data add(const Sales_data& sa, const Sales_data& sb)
{
	Sales_data temp = sa;
	temp.combine(sb);
	return temp;
};
std::ostream& print(std::ostream& cout, const Sales_data& tmep)
{
	cout << " ���: " << tmep.ISBN << "����: " << tmep.amount << "�ܼ�: " << tmep.totalPrice;
	return cout;
};
std::istream& read(std::istream& cin, Sales_data& temp)
{
	double price = 0.0;
	std::cout << "�������š������͵���: \n" << std::endl;
	cin >> temp.ISBN >> temp.amount >> price;
	temp.totalPrice = temp.amount * price;
	return cin;
};