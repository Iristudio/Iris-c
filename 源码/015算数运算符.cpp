#include<iostream>
using namespace std;

int main() {

	int a1 = 10;
	int b1 = 20;

	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;//因为a1 b1 都是一个int类型(整数)所以除出来也只会是个整数 不会有小数

	int a2 = 10;
	int b2 = 3;

	cout << a2 / b2 << endl;//都是一个int类型(整数)所以除出来也只会是个整数 不会有小数


	int a3 = 10;
	int b3 = 0;

	//cout << a3 / b3 << endl; 这样会报错 因为除数不能为0

	//两个小数可以相处吗 yes
	double a4 = 0.5;
	double b4 = 0.25;

	cout << a4 / b4 << endl;

	double a5 = 0.5;
	double b5 = 0.22;

	cout << a5 / b5 << endl;//如果是浮点数类型相除 就可以得到小数
	cout << a3 / b5 << endl;//只要有一个数值是浮点数类型即可

	system("pause");
	return 0;
}