#include<iostream>
using namespace std;
//函数重载的注意事项
//1.引用作为重载的条件 (引用前加个const也可以重载)
void func(int& a) {//如果这传个10 就会变成 int& a = 10; 而引用只能读取 栈或堆区
	cout << "func(int& a) 的调用" << endl;
}
void func(const int& a) {
	cout << "func(const int& a) 的调用" << endl;
}
//函数重载碰到默认参数
void func1(int a, int b = 10) {
	cout << "func1(int a, int b = 10)的调用" << endl;
}
void func1(int a) {
	cout << "func1(int a)的调用" << endl;
}
int main() {
	int a = 10;
	func(a);
	func(10);//这个10是会传到const int& a中的 因为如果传到int& a中是不合法的
	
	//func1(10);//如果只输入一个数 编译器就不知道该运行哪一个函数了 会出现二义性
	//函数重载碰到默认参数会出现二义性 报错
	system("pause");
	return 0;
}
