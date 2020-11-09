#include<iostream>
using namespace std;

class person1 {
	//空的类
};

class person2 {
	int m_a;//有一个非静态成员变量
};


class person3 {
	int m_a;//有一个非静态成员变量

	static int m_b;//以一个静态成员变量
};

class person4 {
	int m_a;//有一个非静态成员变量

	void func() {//一个非静态成员函数

	}
};

class person5 {
	int m_a;//有一个非静态成员变量

	static void func() {//一个静态成员函数

	}
};

int main() {
	person1 p1;
	cout << "person1的对象内存大小是" << sizeof(p1) << endl;//输出为 1 
	//虽然是一个空的类 但还是占了一个字节 是为了区分空对象占内存的位置
	//每个空对象也应该有一个独一无二的地址

	person2 p2;
	cout << "person2的对象内存大小是" << sizeof(p2) << endl;//输出为 4
	//如果类内有一个或多个能在对象上分配内存的成员 对象的大小就是能在对象上分配内存的成员占用的内存

	person3 p3;
	cout << "person3的对象内存大小是" << sizeof(p3) << endl;//输出为 4
	//说明静态成员变量并不属于类的对象上

	person4 p4;
	cout << "person4的对象内存大小是" << sizeof(p4) << endl;//输出为 4
	//说明非静态成员函数并不属于类的对象上

	person4 p5;
	cout << "person5的对象内存大小是" << sizeof(p5) << endl;//输出为 4
	//说明静态成员函数并不属于类的对象上

	system("pause");
	return 0;
}
