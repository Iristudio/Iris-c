#include<iostream>
using namespace std;

//函数的声明
// 设置一个比较函数 实现两个整型变量比较大小 返回比较大的值

//函数的声明实际上就是 提前告诉编译器函数的存在 你就可以在main主方法后再写函数的定义
//注意 函数的声明可以写多次 但定义只能写一次


int max(int a, int b);//函数的声明

int main() {
	int a = 10;
	int b = 20;

	int c = max(a, b);
	cout << "c = " << c << endl;

	system("pause");
	return 0;
}


int max(int a, int b) { //函数的定义
	return a > b ? a : b;
}