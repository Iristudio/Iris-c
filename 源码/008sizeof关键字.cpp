#include<iostream>
using namespace std;

int main(){
//sizeof()关键字可以统计数据类型所占空间大小
//语法 sizeof(数据类型 或者 变量)
	short num1 = 10;
	int num2 = 10;
	long num3 = 10;
	long long num4 = 10;

	cout << "short所占内存空间为" << sizeof(short) << endl;
	cout << "int所占内存空间为" << sizeof(int) << endl;
	cout << "long所占内存空间为" << sizeof(long) << endl;
	cout << "long long所占内存空间为" << sizeof(long long) << endl;
	cout << "short所占内存空间为" << sizeof(num1) << endl;//括号里打变量也可以

}