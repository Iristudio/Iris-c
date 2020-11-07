#include<iostream>
using namespace std;

int main() {
	int a = 10;
	int& b = a;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	b = 100;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	
	cout << "a的地址是" << &a << endl;//引用只是给变量起了给别名 两个名字用的地址是一样的
	cout << "b的地址是" << &b << endl;



	system("pause");
	return 0;
}
