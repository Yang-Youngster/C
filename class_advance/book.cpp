#include "book.h"

book book::create(const std::string& name, const std::string& author, const std::string& isbn, const double& price)
{
	return book(name, author, isbn, price);
}

void show()
{
	std::cout << "Book name: " << name << std::endl;
	std:: << "Book name: " << name << std::endl;
}