#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	struct EyeSight
	{
		float left;
		float right;
	};

	struct Person
	{
		float height;
		float weight;
		char name[10];
		short garde;
		EyeSight eyeSight;
	};

	Person person = { 179.8,75.8,"David",1 ,{1.5f,1.5f} };
	
	cout << person.height << endl;
	cout << person.weight << endl;
	cout << person.name << endl;
	cout << person.garde << endl;
	cout << person.eyeSight.left << endl;
	cout << person.eyeSight.right << endl;
}