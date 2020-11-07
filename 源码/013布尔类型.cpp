#include <iostream>
using namespace std;

int main() {
	//布尔值变量 作用 布尔数据类型代表真或假的值
	//bool类型只有两个值
	//true ---真 （本质为1）
	//false---假 （本质为0）
	bool flag = true;
	cout << flag << endl;

	flag = false;
	cout << flag << endl;

	//布尔类型只占一个字节大小
	cout<< "bool类型所占内存空间为" << sizeof(bool) << endl;
	system("pause");
	return 0;
}