#pragma warning (disable:4996)
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	float f1 = 100.1f;
	char str1[5];

	sprintf(str1, "%f", &f1);
	cout << str1 << endl;
}