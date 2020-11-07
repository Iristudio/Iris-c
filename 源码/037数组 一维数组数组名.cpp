#include<iostream>
using namespace std;

int main() {
	/*一维数组名的用途
	 1. 可以统计整个数组在内存中的长度
	 2. 可以获取数组在内存中的首地址
	 一般用16进制数字来代表内存地址编号
	*/
	int arr[5] = { 1, 2, 3, 4, 5 };

	cout<<"整个数组占用内存空间是" << sizeof(arr) << endl;
	cout<<"每个元素占用内存空间为" << sizeof(arr[0]) << endl;
	cout << "数组中元素个数" << sizeof(arr)/sizeof(arr[0]) << endl;

	//2
	cout << "数组首地址为" << (int)arr << endl;
	cout << "数组中第一个元素地址为" << (int)&arr[0] << endl;

	//数组名是常量 不可以进行赋值操作
	//arr = 100; 这样就会报错


	system("pause");
	return 0;
}