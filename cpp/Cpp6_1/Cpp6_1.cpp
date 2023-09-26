#include <iostream>
using namespace std;

int main()
{
	/*const int arraySize = 4;
	bool atb[arraySize]{true,true,false,true};

	cout.setf(ios_base::boolalpha);

	cout << atb[0] << endl;
	cout << sizeof(atb) / sizeof(bool) << endl;
	cout << std::size(atb) << endl;*/

	int arr1[3]{ 1,2,3 };
	int arr2[2];

	//memcpy(arr2, arr1, sizeof(arr1));
	copy(arr1 + 1, arr1 + 3, arr2);
	
	for (int i = 0; i < size(arr2); i++)
	{
		cout << arr2[i] << endl;
	}
}