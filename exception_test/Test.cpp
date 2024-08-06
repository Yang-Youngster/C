#include "Test.h"
using namespace std;
int main()
{
	char  str1 = '2';
	char  str2 = '1';

	if (str1 == str2)
	{
		throw runtime_error("345678");
	}
	else
	{
		throw runtime_error("not corret");
	}
	return -1;
}