#include<iostream>
using namespace std;

int main() {
	int a = 100;
	int b = 20;
	int c = 0;
	//三目运算符
	//表达式1 ? 表达式2 :表达式3
	//如果表达式1为真 则执行表达式2 
	//如果表达式1为假 则执行表达式3
	c = (a > b ? a : b);//三目运算符需要用()括起来
	cout << c <<endl;

	//三目运算符返回的值还是变量 所以可以继续赋值
	(a > b ? a : b) = 200;
	cout << a << endl;
	cout << b << endl;

}