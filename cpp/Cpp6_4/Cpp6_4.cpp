#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str = "abcd";
	cout << str << endl;

	char ch = '1';

	int num = stoi(&ch);

	cout << num << endl;

	string str2;
	getline(cin, str2);
	cout << str2 << endl;
}