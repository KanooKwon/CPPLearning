#pragma warning(disable:4996)
#include <iostream>
#include <limits>
using namespace std;

int main()
{
	//int a;
	//cin >> a;			// cin�� ������ ����� �Է��� �ƴٸ� true�� �Է��̾ȵƴٸ� false�� �����Ѵ� cin�� ���๮�ڴ� ���ۿ� ������ �ʰ� �����Ѵ�
	//cout << a << endl;

	/*scanf("%d", &a);
	printf("%d", a);*/

	//char ch;

	//cin >> ch;
	//cout << ch << endl;

	//cin.ignore(numeric_limits<streamsize>::max(), 'p');	// ���ڰ��� �������� �ʴ´ٸ� ���๮�ڰ� �ƴ� �ٸ� char ���� ���۰��� ���Ƶ� �װ� �����ϰ� ���� cin�� �޴´� 
	//													// ���ڰ����� ������ �ִ´ٸ� �ش� ������ŭ�� ���ڸ� ���� �ι�° ���ڷ� ���ڸ� ������ �ָ� �ش� ���ڰ� ���´ٸ� ���ø� ���߰� ���� �޴´�
	//													// ������ �ش� ���ڵڿ��� ���ڰ� ���ӵȴٸ� �ٽ� ���۰����� ���̴� ����

	//cin >> ch;
	//cout << ch << endl;

	//int b;
	//cin >> b;
	//cout << b << endl;

	//if (cin.fail())	// cin.fail()�� �Է��� �������ο� ���� �������� ��ȯ
	//	cin.clear();

	//cin.ignore(numeric_limits<streamsize>::max(), '\n');

	//cin >> b;
	//cout << b << endl;

	//bool tf;

	//cin.setf(ios_base::boolalpha);		// cin�� ���� true, false Ÿ�������� ���� �־� �������� �Ǻ��� �� �ִ�
	//cin >> tf;
	//cout << tf << endl;

	int num;
	
	/*cin.setf(ios_base::hex, ios_base::basefield);
	cin >> num;
	cin.unsetf(ios_base::hex);*/

	/*cin >> std::hex >> num;
	cout << num << endl;*/
	
	/*num = 140;
	freopen("0923learn.txt", "w", stdout);
	cout << num;*/

	freopen("0923learn.txt", "r", stdin);
	cin >> num;
	cout << num;

}