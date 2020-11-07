#include<iostream>
using namespace std;
//函数返回值不能是局部变量的引用
int& test1() {
	int a = 10;//这是个局部变量 放在栈区 运行一次就会被释放了
	return a;
}

int& test2() {
	static int b = 10;//这是个静态变量 放在全局区 直到程序结束才会被释放
	return b;
}

int main() {
	int& a1 = test1();

	cout << a1 << endl;//第一次操作能输出正确的值 但是一次非法操作 能输出只是编译器给你保留了一次
	cout << a1 << endl;//第二次不会报错 但输出不了正确的值了 因为编译器已经释放了函数的值

	cout << "----------------------------------------------------------------------------------" << endl;

	int& b1 = test2();//这次的b1实际上就是test2的b的别名

	cout << b1 << endl;
	cout << b1 << endl;
	
	test2() = 1000;//函数的调用可以作为左值存在 前提返回值是个引用

	cout << b1 << endl;
	cout << b1 << endl;

	system("pause");
	return 0;
}
