#include<iostream>
using namespace std;

void val(const int& val) {//在形参前加一个const 在这个函数内就不能能修改这个引用的值了
	//val = 1000; 如果不在形参前写const 这一步也会改变主函数内的a
	cout << val << endl;

}

int main() {

	//常量引用 
	//使用场景:用来修饰形参 ,防止误操作

	//int a = 10;
	//int& ref =10;这样是错误的 因为引用必须引到一块合法的内存空间

	const int& ref = 10;//这样是可以的 其实这一步是编译器帮了你 
	//编译器优化代码:
	                  //int temp = 10;
					  //int& ref = temp;

   //ref = 20; 这一步是错误的 const把这个引用限定成了只读状态 不可以去修改了;

	cout << "-----------------------------------------------" << endl;

	int a = 100;

	val(a);

	system("pause");
	return 0;
}
