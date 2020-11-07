#include<iostream>
using namespace std;

int main() {
	//前置递增
	int a = 10;
	++a; //使变量+1
	cout << a << endl;

	//后置递增
	int b = 10;
	b++;
	cout << b << endl;

	//前置与后置的区别
	// 前置是先对变量+1再进行运算
	//前置
	int a1 = 10;
	int b1 = ++a1 * 10;
	cout<<"a1 =" << a1 << endl;
	cout<<"b1 =" << b1 << endl;

	//后置是先进行运算 运算结束后对变量+1
	//后置
	int a2 = 10;
	int b2 = a2++ * 10;
	cout << "a2 =" << a2 << endl;
	cout << "b2 =" << b2 << endl;


	system("pause");
	return 0;

}