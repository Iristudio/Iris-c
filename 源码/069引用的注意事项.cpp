#include<iostream>
using namespace std;

int main() {
	int a = 10;
	int b = 20;
	//int& c; 这样会报错 引用必须初始化
	int& c = a;//一旦初始化后就不可以更改

	c = b;//这是赋值操作 不是更改引用 是把b的值赋给a

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;


	system("pause");
	return 0;
}
