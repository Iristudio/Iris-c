#include<iostream>
using namespace std;

//函数常见样式
//1.无参无返
void test01() {
	cout << "this is test01" << endl;
}
//2.有参无返
void test02(int a) {
	cout << "this is test02 --a=" << a << endl;
}

//3.无参有返
int test03() {
	cout << "this is test03" << endl;
	return 1000;
}

//4.有参有返
int test04(int b ){
	cout << "this is test04  -- b=" << b << endl;
	int c = b + 1;
	return c; 
}

int main() {
	//函数test01调用
	test01();

	//函数test02调用
	test02(100);

	//函数test03调用
	int num1 = test03();
	cout << "num1 = " << num1 << endl;

	//函数test04调用
	int num2 = 111;
	int num3 = test04(num2);
	cout << "num3 = " << num3 << endl;

	system("pause");
	return 0;
}