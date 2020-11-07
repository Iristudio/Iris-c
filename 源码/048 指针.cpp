#include<iostream>
using namespace std;

int main() {
	//1.如何定义一个指针
	int a = 10;
	//指针定义的语法:
	//数据类型 * 指针变量名
	int* p;
	//让指针p记录变量a的地址
	p = &a;
	cout << "a的地址为" << &a << endl;
	cout << "指针p为" << p << endl;
	//2.如何使用指针
	//可以通过解引用的方式在找到指针指向的内存
	//指针前加 * 表示解引用,找到指针指向的内存的数据
	*p = 1000;//*p就相当于找到了变量a内存中的10 这叫解引用 然后对其再赋值1000
	cout << "a为" << a << endl;
	cout << "*p为" << *p << endl;

	system("pause");
	return 0;
}
