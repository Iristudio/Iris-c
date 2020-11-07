#include<iostream>
using namespace std;

int main(){
	/*
	实型（浮点型）
	float 表示单精度 内存空间占用4字节 7位有效数字
	double 表示双精度 内存空间占用8字节 15-16位有效数字
	*/
	float f1 = 3.14f;//因为c++默认小数是双精度的double 所以在小数后加一个f表示这是单精度的
	cout << "f1=" << f1 << endl;

	double d1 = 3.14;
	cout << "d1=" << d1 << endl;

	float f4 = 3.1415926;
	double d2 = 3.1415926;
	cout << "f4=" << f4 << endl;
	cout << "d2=" << d2 << endl;
	//在窗口中最多显示6位有效数字 所以并不会显示9之后的

	cout << "float所占内存空间为" << sizeof(float) << endl;
	cout << "double所占内存空间为" << sizeof(double) << endl;
	//科学计数法
	float f2 = 3e2;
	cout << "f2=" << f2 << endl;//3e2 相当于 3*10^2
	float f3 = 3e-2;
	cout << "f3=" << f3 << endl;//3e-2 相当于 3*10^-2=3*0.1^2


	system("pause");
	return 0;


}