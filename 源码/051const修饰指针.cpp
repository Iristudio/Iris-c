#include<iostream>
using namespace std;

int main() {
	int a = 10;
	int b = 10;

	//常量指针 语法 const int * p = &a; 这里的const修饰的是指针 值不能改
	//特点 :指针的指向可以修改 但指针指向的值不能修改
	
	const int* p = &a;

	//*p = 20; 这样会直接报错 显示左值必须是一个能修改的变量 证明了 常量指针指向的值不能修改
	p = &b;//这样就是修改指针的指向 是可行的

	cout << "------------------------------------------------------------------------------------------" << endl;

	//指针常量 语法 int * const p = &a; 这里的const修饰的是常量 指针指向不能改
	//特点 指针的指向不可以修改 但指针指向的值可以修改(与常量指针刚好相反)

	int* const q = &a;

	*q= 20;//正确 指针解引用后可以改指向的值
	//q = &b; 这样就会报错 显示左值必须是一个能修改的变量 证明指针常量不能改变指向

	cout << "------------------------------------------------------------------------------------------" << endl;

	//const既修饰指针 又修饰常量 语法 cosnt int * const p = &a; 这里的const既修饰指针 又修饰常量  指向与值都不能改
	//特点 :指针的指向和指针指向的值都不可以改
	
	const int* const o = &a;

	//*p = 20; 这样会直接报错 显示左值必须是一个能修改的变量 证明   const既修饰指针 又修饰常量指针指向的值不能修改
	//q = &b; 这样就会报错 显示左值必须是一个能修改的变量    证明   const既修饰指针 又修饰常量 不能修改指向
}