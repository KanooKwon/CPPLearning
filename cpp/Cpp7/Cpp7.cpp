#include <iostream>
using namespace std;;

void Cpp7_1()
{
	/*int num = 147;
	int* pointer = &num;

	cout << num << endl;
	cout << &num << endl;
	cout << pointer << endl;
	cout << *pointer << endl;

	*pointer = 100;
	cout << num << endl;*/

	int num = 10;
	const int* pNum = &num;

	int num0 = 20;
	pNum = &num0;

	cout << *pNum << endl;
}


int main()
{
	Cpp7_1();
}