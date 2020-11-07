#include<iostream>
using namespace std;

int main() {
	//赋值运算符
	//= 直接给变量赋值
	int a = 10;
	a = 100;//将变量a的值变为100
	cout << a << endl;

	//+= 
	a = 10;
	a += 2;//a = a+2
	cout << a << endl;

	//-=
	a = 10;
	a -= 2;//a = a-2
	cout << a << endl;

	//*=
	a = 10;
	a *= 2;//a = a*2
	cout << a << endl;

	// /=
	a = 10;
	a /= 2;//a = a/2 
	cout << a << endl;

	// %=
	a = 10;
	//a %= 2;//求a/2的余数
	cout << a << endl;



	system("pause");
	return 0;

}