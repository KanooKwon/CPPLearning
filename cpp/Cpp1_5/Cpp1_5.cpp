#pragma warning(disable:4996)
#include <cstdio>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout.put('1');
	cout.put('\n');
	cout.write("Hello World", 7); // (대상 문자열, 문자열에서 출력할 양(인덱스 아님 개수임))
	cout << "\n";
	cout << endl;

	cout.width(15);	// 15칸짜리 출력 오브젝트? 생성??
	//cout.fill('&');	// fill 함수 이후에 cout<< 이 없다면 cout.width(n)의 n만큼 생성 cout<< 에 따라 생성 수가 결정
	cout << "55555555555555577777" << endl;

	float num = 0.1234567f;
	cout << num << endl;

	cout.precision(100);	// 부동 소수점 뒤의 다른 값이 붙는 이유: 아무튼 이진법으로 숫자를 표현하는데 소수점 밑의 수들은 이진법으로 딱 표현하기가 불가능함 따라서 실수형으로는 비교연산등을 조심하자
	cout << num << endl; 

	cout.setf(ios_base::showpos);	// setf = format flag setting, ios_base = 범위 지정, showpos = show positive(양수인 숫자형 데이터에는 +표시)

	cout << 777 << endl;
	cout.unsetf(ios_base::showpos);	// setf해제
	cout << 1.34f << endl;

	cout << true << endl;
	cout << false << endl;

	cout.setf(ios_base::boolalpha);	// boolean 값을 그대로 출력할 경우 true는 1 false는 0이지만 ios_base::boolalpha로 포맷을 설정해주면 각각 "true","false"로 출력된다
	cout << true << endl;
	cout << false << endl;

	cout.setf(ios_base::internal, ios_base::adjustfield); // ios_base::left : 왼쪽 정렬, ios_base::right : 오른쪽 정렬, ios_base::internal : 부호만왼쪽 정렬, 다른건 우측 정렬
	cout.width(15);
	cout << "ser" << 20 << endl;

	cout.setf(ios_base::hex, ios_base::basefield); // ios_base::dec : 10진수, ios_base::oct : 8진수, ios_base::hex : 16진수
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