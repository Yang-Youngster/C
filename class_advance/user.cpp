#include "user.h"

user user::create()
{
	std::string name;
	std::cout << "Enter your name: ";
	std::cin >> name;
	book temp = book::create();

	vector<book> books;
	books.push_back(temp);

	return user(name, books);
}
void user::show()
{
	std::cout << "Name: " << this->name << std::endl;
	std::cout << "Books: " << std::endl;
	for (int i = 0; i < this->books.size(); i++)
	{
		this->books[i].show();
	}
}