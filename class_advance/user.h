#pragma once
#include <string>
#include <vector>
#include <ctime>
#include <iostream>
#include "book.h"

using namespace std;
class user
{
public:
	//���캯��
	user() = default;
	user(std::string name, vector<book> books) :name(name) {}
	user(const user& u) :name(u.name), books(u.books) {}

	//�û���Ϣ
public:
	static user create();
	void show();

private:
	std::string getName() { return name; }

private:
	std::string name;
	vector<book> books;
};
