#include "main.h"

int main()
{
	Sales_data book;

	//输入数据
	read(cin, book);

	//输出数据

	print(cout, book);

	cout << book.getISBN();

	return 0;
}