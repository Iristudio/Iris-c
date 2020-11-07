#include<iostream>
using namespace std;
//发现是引用 转换 int* const ref = &a;
void func(int& ref){
	ref = 100;//ref是引用 转化成*ref = 100;
}
int main() {
	int a = 10;
	
	int& ref = a;//编译器检测到引用 自动转化成 int* const ref = &a;
	ref = 20;//转化成 *ref = 20;

	cout<< "a的值是"<< a << endl;
	cout<<"ref的值是" << ref << endl;
	
	func(a);

	//所以 引用的本质是一个指针常量
	//c++推荐使用引用技术 因为语法方便 引用的本质是指针常量 但所有的指针操作编译器都帮我们做了
	system("pause");
	return 0;
}
