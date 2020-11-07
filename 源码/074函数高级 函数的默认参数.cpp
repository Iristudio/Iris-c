#include<iostream>
using namespace std;
//在c++中,参数的形参是可以有默认值的
//语法:
//返回值类型 函数名 (参数 = 默认值) {}
int func(int a,int b = 20,int c = 30) {//如果我们传入数据 就用我们传入的数据 如果没有 就用默认值
	return a + b + c;
}
//int test(int a,int b = 10,int c,int d) { //这样是会报错的
//注意 如果在形参中 一个位置有了默认值 后面的值都要有默认值 

//}

//如果函数声明有默认参数 函数实现就不能有默认参数
//函数声明和实现只能一个有默认参数
int func2(int a = 10, int b = 20);

int func2(int a,int b) {

}

int main() {
	cout << func(10, 30) << endl;




	system("pause");
	return 0;
}
