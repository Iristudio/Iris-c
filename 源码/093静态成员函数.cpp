#include<iostream>
using namespace std;

//静态成员函数

class person {
public:
	static void func() {
		m_a = 100;//静态成员函数 可以访问 静态成员变量
		//m_b = 200;// 这句会报错 C++ 非静态成员引用必须与特定对象相对
		//说明 静态成员函数 不可以访问 非静态成员函数 
		//因为如果有多个对象声明 无法区分到底是调用哪一个对象的m_b
		cout << "func函数调用" << endl;
	}

	static int m_a;//声明静态成员变量
	int m_b;//声明非静态成员变量

	//静态成员函数也是有访问权限的
private:
	static void func2() {
		cout << "func2函数调用" << endl;
	}

};

int person::m_a = 0;//初始化静态成员变量

void  test01() {
	//静态成员函数有两种访问方式
	//1 通过对象进行访问
	person p;
	p.func();

	//2 通过类名来访问 
	person::func();

	//person::func2(); //会报错 C++ 函数 (已声明 所在行数:21) 不可访问
	//证明了 静态成员函数也是有访问权限的 类外访问不到私有静态成员函数
}

int main() {
	test01();


	system("pause");
	return 0;
}
