#pragma once
#include <string>
#include <vector>
#include <ctime>
#include "book.h"

using namespace std;
class user
{
	//���캯��
	user() = default;
	user(std::string name) :name(name) {}
	user(const user& u) :name(u.name), books(u.books) {}

	//�û���Ϣ
public:

private:
	std::string name;
	vector<book> books;
};
