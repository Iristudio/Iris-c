#include<iostream>
using namespace std;

//值传递
//定义函数 实现两个数字进行交换的函数

void swap(int num1, int num2) {//如果函数不需要返回值 那么返回值类型直接写void

	cout << "交换前" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "交换后" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	//如果函数不需要返回值 也就是返回值类型是void时 可以不写return表达式
}

int main() {
	int a = 10;
	int b = 50;

	//当我们做值传递的时候 函数的形参发生改变 不会影响到是实参
	cout << "交换前 " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	swap(a,b);

	cout << "交换后 " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}