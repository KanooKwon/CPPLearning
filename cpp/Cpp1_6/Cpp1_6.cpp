#include <iostream>
#include <compare>
using namespace std;

int main()
{
	int num = 0;
	cout << ++num << endl;
	cout << num << endl;

	cout.setf(ios_base::boolalpha);
	cout << (1 && 2) << endl;
}