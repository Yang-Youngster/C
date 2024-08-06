#include "book.h"

book book::create()
{
	std::string name;
	std::string author;
	std::string isbn;
	double price;
	//¼üÅÌÊäÈë¶ÔÏó
	std::cout << "Enter book name: ";
	std::cin >> name;
	std::cout << "Enter author: ";
	std::cin >> author;
	std::cout << "Enter ISBN: ";
	std::cin >> isbn;
	std::cout << "Enter price: ";
	std::cin >> price;
	return book(name, author, isbn, price);
}

void book::show()
{
	std::cout << "Book name: " << name << std::endl;
	std::cout << "Author: " << author << std::endl;
	std::cout << "ISBN: " << isbn << std::endl;
	std::cout << "Price: " << price << std::endl;
}