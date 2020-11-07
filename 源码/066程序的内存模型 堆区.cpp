#include<iostream>
using namespace std;
//堆区 
//堆区由程序员分配释放 ,但若程序员不主动释放 程序结束时由操作系统回收
//在c++中 主要利用new在堆区开辟空间


int * func() {

	//利用new关键字 可以将数据开辟到堆区
	int* p = new int(10);//这里的指针本质也是一个变量 局部变量 放在栈上,指针保存的数据存放在堆区
	return p;

}

int main() {
	
	//在堆区开辟数据
	int* p = func();

	cout << *p << endl;
	cout << *p << endl;

	cout << *p << endl;




	system("pause");
	return 0;
}
