#pragma once
#include <string>
#include <vector>
#include <ctime>
#include "book.h"

using namespace std;
class user
{
	//构造函数
	user() = default;
	user(std::string name) :name(name) {}
	user(const user& u) :name(u.name), books(u.books) {}

	//用户信息
public:

private:
	std::string name;
	vector<book> books;
};
