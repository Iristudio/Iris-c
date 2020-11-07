#include<iostream>
using namespace std;
//占位参数 语法
//返回值类型 函数名 (数据结构){}
//占位参数还可以有默认参数 目前还用不到
void func(int a, int) {

}

int main() {
	func(10, 10);//虽然没定义形参的变量名 但是还是可以传进去值


	system("pause");
	return 0;
}
