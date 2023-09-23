#pragma warning(disable:4996)
#include <cstdio>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout.put('1');
	cout.put('\n');
	cout.write("Hello World", 7); // (��� ���ڿ�, ���ڿ����� ����� ��(�ε��� �ƴ� ������))
	cout << "\n";
	cout << endl;

	cout.width(15);	// 15ĭ¥�� ��� ������Ʈ? ����??
	//cout.fill('&');	// fill �Լ� ���Ŀ� cout<< �� ���ٸ� cout.width(n)�� n��ŭ ���� cout<< �� ���� ���� ���� ����
	cout << "55555555555555577777" << endl;

	float num = 0.1234567f;
	cout << num << endl;

	cout.precision(100);	// �ε� �Ҽ��� ���� �ٸ� ���� �ٴ� ����: �ƹ�ư ���������� ���ڸ� ǥ���ϴµ� �Ҽ��� ���� ������ ���������� �� ǥ���ϱⰡ �Ұ����� ���� �Ǽ������δ� �񱳿������ ��������
	cout << num << endl; 

	cout.setf(ios_base::showpos);	// setf = format flag setting, ios_base = ���� ����, showpos = show positive(����� ������ �����Ϳ��� +ǥ��)

	cout << 777 << endl;
	cout.unsetf(ios_base::showpos);	// setf����
	cout << 1.34f << endl;

	cout << true << endl;
	cout << false << endl;

	cout.setf(ios_base::boolalpha);	// boolean ���� �״�� ����� ��� true�� 1 false�� 0������ ios_base::boolalpha�� ������ �������ָ� ���� "true","false"�� ��µȴ�
	cout << true << endl;
	cout << false << endl;

	cout.setf(ios_base::internal, ios_base::adjustfield); // ios_base::left : ���� ����, ios_base::right : ������ ����, ios_base::internal : ��ȣ������ ����, �ٸ��� ���� ����
	cout.width(15);
	cout << "ser" << 20 << endl;

	cout.setf(ios_base::hex, ios_base::basefield); // ios_base::dec : 10����, ios_base::oct : 8����, ios_base::hex : 16����
	cout << 20 << endl;
	cout.unsetf(ios_base::hex);
	cout << 20 << endl;
	cout << hex << 20 << endl;
	std::hex(cout);
	cout << 20 << endl;
	cout.unsetf(ios_base::hex);
	cout << 20 << endl;

	freopen("0923learn.txt", "w", stdout);
	cout << setw(10) << setfill('&') << setprecision(2) << 0.13f;
}