#include "main.h"

int main()
{
	Sales_data book;

	//��������
	read(cin, book);

	//�������

	print(cout, book);

	cout << book.getISBN();

	return 0;
}