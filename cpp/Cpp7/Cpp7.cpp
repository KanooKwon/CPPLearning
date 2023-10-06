#include <iostream>
#include <vector>
using namespace std;

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

void Cpp7_5()
{
	int* p = nullptr;
}

void Cpp7_6() 
{

}

void Cpp7_7()
{
	vector<int> vec(1);
	vec.push_back(10);

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}

	int* a = vec.data();

	cout <<	a[0] << endl;

	vector<int> vec0 = { 1,2,3 };
	vector<int> vec1 = { 1,2,3,-1 };

	if (vec0 == vec1)
		cout << "=" << endl;
	else if(vec0 > vec1)
		cout << ">" << endl;
	else
		cout << "<" << endl;
}

int main()
{
	//Cpp7_1();
	//Cpp7_3();
	Cpp7_7();
}