#include <iostream>
using namespace std;

int main() {
	//c++规定在创建一个变量或常量时 必须要指定相应的数据类型，否则无法给变量分配内存
	/*整型：整型变量表示的是整数类型的数据c++有四种能表示整型
	* 区别在于占用内存空间不同
	short（短整型）：2字节									取值范围 -2^15--2^15-1
	int（整型）：4字节												 -2^31--2^31-1
	long（长整型）：4字节（linux中32位为4字节 64位为8字节）			 -2^31--2^31-1
	long long（长长整型）：8字节									 -2^63--2^63-1
	*/
	short num1 = 10;//short取值范围是-32768--32767
	//short num5 = 10000000;这样不会报错但是并不会显示10000000
	int num2 = 20;
	long num3 = 30;
	long long num4 = 40;

	cout << "numn1=" << num1 << endl;
	cout << "numn2=" << num2 << endl;
	cout << "numn3=" << num3 << endl;
	cout << "numn4=" << num4 << endl;


	system("pause");

	return 0;
}