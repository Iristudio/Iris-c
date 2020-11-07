#include<iostream>
using namespace std;

int main() {
	//取模运算也就是求除法的余数
	int a1 = 10;
	int b1 = 3;

	cout << a1 % b1 << endl;

	int a2 = 10;
	int b2 = 20;

	cout << a2 % b2 << endl;//一个数如果除不过除数 那么模就是他自己

	int a3 = 10;
	int b3 = 0;

	//cout << a3 % b3 << endl; 取模运算也是基于除法运算之上的 所以除数为0也做不了除数运算

	double d1 = 2.5;
	double d2 = 1.4;

	//cout << d1 % d2 << endl; 小数是不可以做取模运算的
	//cout << a1 % d1 << endl; 整数除小数也是不可以的
	//cout << d1 % b1 << endl; 小数除整数也是不行的

	system("pause");
	return 0;

}