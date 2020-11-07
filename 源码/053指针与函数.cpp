#include<iostream>
using namespace std;

//实现两个数字进行交换的代码
void swap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;

	cout << "函数内a = " << a << endl;
	cout << "函数内b = " << b << endl;
}
void swap02(int* p, int* q) {
	int temp = *p;
	*p = *q;
	*q = temp;
}


int main() {

	int a = 10;
	int b = 20;
	//指针与函数
	//1.值传递
	swap01(a, b);

	cout << "主方法内值传递a = " << a << endl;
	cout << "主方法内值传递b = " << b << endl;
	
	//地址传递
	//地址传递是可以修改到实参的值的
	swap02(&a, &b);

	cout << "主方法内地址交换a = " << a << endl;
	cout << "主方法内地址交换b = " << b << endl;


	system("pause");
	return 0;
}
