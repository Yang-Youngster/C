#pragma once
#include <string>
#include <iostream>
using namespace std;

class book
{
public:
	//默认构造函数
	book() = default; // private constructor
	book(const std::string& name, const std::string& author, const std::string& isbn, const double& price) :
		name(name), author(author), isbn(isbn), price(price) {}
	book(const book& other) :name(other.name), author(other.author), isbn(other.isbn), price(other.price) {}

public:
	static book create();
	void show();
private:
	void incrementPrice();

private:
	std::string name;
	std::string author;
	std::string isbn;
	double price;
};

//内联函数
inline void book::incrementPrice()
{
	price += 10;
}