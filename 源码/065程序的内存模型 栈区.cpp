#include<iostream>
using namespace std;
//栈区
//栈区的注意事项 不要返回局部变量的地址 因为一旦函数执行过一次 里面的内容就会自动释放了
//栈区的数据又编译器管理和开辟和释放
int* func(int b) {//形参数据也会放在栈区
	b = 100;
	int a = 10;//局部变量 存放在栈区 栈区的数据在函数执行完后自动释放
	return &a;//返回局部变量的地址
}

int main() {
	int a = 10;
	//接受func函数的返回值
	int* p = func(a);

	cout << *p << endl;//第一次可以成功打印 是因为编译器做了一次保留
	cout << *p << endl;//第二次这个数据就不再保留了

	//栈区存放的是 形参 和 局部变量
	system("pause");
	return 0;
}
