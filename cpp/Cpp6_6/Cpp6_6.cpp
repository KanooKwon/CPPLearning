#include <iostream>
#include <string>
using namespace std;

int main()
{
	union ID
	{
		int idInt;
		char idChars[10];
	};

	struct product1
	{
		int idType;
		ID id;
	};

	product1 p1 = { 0,{.idChars = "123"}};
}