#pragma warning(disable:4996)
#include <iostream>
#include <limits>
using namespace std;

int main()
{
	//int a;
	//cin >> a;			// cin은 변수에 제대로 입력이 됐다면 true를 입력이안됐다면 false를 리턴한다 cin은 개행문자는 버퍼에 남지기 않고 무시한다
	//cout << a << endl;

	/*scanf("%d", &a);
	printf("%d", a);*/

	//char ch;

	//cin >> ch;
	//cout << ch << endl;

	//cin.ignore(numeric_limits<streamsize>::max(), 'p');	// 인자값을 설정하지 않는다면 개행문자가 아닌 다른 char 값이 버퍼값이 남아도 그걸 무시하고 새로 cin을 받는다 
	//													// 인자값으로 정수를 넣는다면 해당 정수만큼의 문자를 무시 두번째 인자로 문자를 지정해 주면 해당 문자가 나온다면 무시를 멈추고 값을 받는다
	//													// 하지만 해당 문자뒤에도 문자가 지속된다면 다시 버퍼값으로 쌓이니 주의

	//cin >> ch;
	//cout << ch << endl;

	//int b;
	//cin >> b;
	//cout << b << endl;

	//if (cin.fail())	// cin.fail()은 입력의 성공여부에 따라 참거짓을 반환
	//	cin.clear();

	//cin.ignore(numeric_limits<streamsize>::max(), '\n');

	//cin >> b;
	//cout << b << endl;

	//bool tf;

	//cin.setf(ios_base::boolalpha);		// cin에 직접 true, false 타이핑으로 값을 넣어 참거짓을 판별할 수 있다
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