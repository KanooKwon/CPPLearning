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

void Cpp7_2()
{
	int nums[] = { 1,2,3 };
	int* pNums = nums;
}

void Cpp7_3() 
{
	int* num = new int(123);
	int* num1 = num;

	cout << num << endl;
	/*cout << *num1 << endl;

	delete num;

	cout << *num1 << endl;*/
}

int main()
{
	//Cpp7_1();
	Cpp7_3();
}