#include <iostream>
using namespace std;

//#define 宏常量
//书写方式 #define 常量名 初始值
//写在方法之前

#define day 7 //这是宏常量 把代码中所有的 day 都表示为7

int main() {
	//如果在这书写day = 14;就会报错
	cout << "一周有" <<day<<"天" <<endl;

//第二种常量书写方式
//const 数据类型 变量名 = 初始值
//相当于把变量变常量 const的变量不能在赋值更改;
	const int a = 12;
	cout << "一年有" << a << "月" << endl;

	system("pause");

	return 0;
}