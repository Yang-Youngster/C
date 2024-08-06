#pragma once
#include <string>
using namespace std;

class book
{
	//Ĭ�Ϲ��캯��
	book() = default; // private constructor
	book(const std::string& name, const std::string& author, const std::string& isbn, const double& price) :
		name(name), author(author), isbn(isbn), price(price) {}
	book(const book& other) :name(other.name), author(other.author), isbn(other.isbn), price(other.price) {}

public:
	static book create(const std::string& name, const std::string& author, const std::string& isbn, const double& price);
	static void show();

private:
	std::string name;
	std::string author;
	std::string isbn;
	double price;
};
