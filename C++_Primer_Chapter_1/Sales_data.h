#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<string>
#include<iostream>

struct Sales_data;

Sales_data add(const Sales_data&, const Sales_data&);
std::ostream& print(std::ostream&, const Sales_data&);
std::istream& read(std::istream&, Sales_data&);

//友元函数的声明
class Sales_data
{
	friend Sales_data add(const Sales_data&, const Sales_data&);
	friend std::ostream& print(std::ostream&, const Sales_data&);
	friend std::istream& read(std::istream&, Sales_data&);

public:
	//构造函数
	Sales_data(const std::string& s, double p, int n) : ISBN(s), totalPrice(p), amount(n) {}
	Sales_data(const std::string& s) : ISBN(s), totalPrice(0), amount(0) {}
	//默认初始化
	Sales_data() : ISBN(""), totalPrice(0), amount(0) {}
	Sales_data(std::string isbn, double price, int num) : ISBN(isbn), totalPrice(price), amount(num) {}
	//默认初始化使用手动输入

	Sales_data(std::istream& is) {
		read(is, *this);
		std::cout << "Sales_data(std::istream &is) " << std::endl;
	}
	Sales_data& combine(const Sales_data&);

	//常量成员函数
	std::string getISBN() const { return ISBN; }
private:
	std::string ISBN;
	double totalPrice;
	int amount;
};
#endif
