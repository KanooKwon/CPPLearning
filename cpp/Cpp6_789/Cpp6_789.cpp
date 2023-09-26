#include <iostream>
#include <array>
#include <string>

using namespace std;

int main()
{
	array<int, 3> nums{ 1,2,3 };

	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << endl;
	}

	for (int n : nums)
	{
		n = 0;
		
	}

	printf("\n\n");

	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << endl;
	}

	for (int& n : nums)
	{
		n = 0;

	}

	printf("\n\n");

	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << endl;
	}
}