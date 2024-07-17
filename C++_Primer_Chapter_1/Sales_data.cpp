#include "Sales_data.h"

Sales_data& Sales_data::combine(const Sales_data& lhs)
{
	//相同交易账单的数量和总价格相加
	amount += lhs.amount;
	totalPrice += lhs.totalPrice;
	return *this;
}
/**
*
* 相同的相加
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
	cout << " 编号: " << tmep.ISBN << "数量: " << tmep.amount << "总价: " << tmep.totalPrice;
	return cout;
};
std::istream& read(std::istream& cin, Sales_data& temp)
{
	double price = 0.0;
	std::cout << "请输入编号、数量和单价: \n" << std::endl;
	cin >> temp.ISBN >> temp.amount >> price;
	temp.totalPrice = temp.amount * price;
	return cin;
};