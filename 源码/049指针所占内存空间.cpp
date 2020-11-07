#include<iostream>
using namespace std;

int main() {
	//既然指针也是一种数据类型 那么它占用多少内存空间呢
	//int * p; 他保存了一个地址 实际上就是保存了一个16进制的数
	//那么16进制的数占多少内存呢
	//在32位操作系统下 指针占4个字节大小的空间; 在64位操作系统下 指针占8个字节大小 
	
	int a = 10;
	int* p = &a;

	cout << "sizeof(int *) = " << sizeof(p) << endl;
	cout << "sizeof(float *) = " << sizeof(float *) << endl;
	cout << "sizeof(double *) = " << sizeof(double *) << endl;
	cout << "sizeof(char *) = " << sizeof(char *) << endl;
	//不管是什么数据类型 在32位操作系统下 指针都是占4个字节大小的空间; 在64位操作系统下 指针都是占8个字节大小


	system("pause");
	return 0;

}