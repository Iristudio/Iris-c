#include<iostream>
using namespace std;

int main(){
	//逻辑运算符 非 !

	int a = 10;//在c++中 非0都为真

	//如果a为假 则!a为真 如果a为真 则!a为假
	cout << !a << endl;

	cout << !!a << endl;

	//逻辑运算符 与 &&
	// 两个都为真才是真 其中一个为假即为假 两个假也是假
	int a1 = 10;
	int b1 = 10;
	cout << (a1 && b1) << endl;

	int a2 = 10;
	int b2 = 0;
	cout << (a2 && b2) << endl;

	int a3 = 0;
	int b3 = 0;
	cout << (a3 && b3) << endl;
	//逻辑运算符 或 ||
	//一个为真既是真 两个真也是真 两个都假才是假
	int a4 = 10;
	int b4 = 10;
	cout << (a4 || b4) << endl;

	int a5 = 10;
	int b5 = 0;
	cout << (a5 || b5) << endl;

	int a6 = 0;
	int b6 = 0;
	cout << (a6 || b6) << endl;

	system("pause");
	return 0;
}