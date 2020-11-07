#include<iostream>
using namespace std;

//静态成员变量
//它有三个特点
//1.所有对象共用同一份数据
//2.在编译时分配内存
//3.类内声明,类外初始化

class person {
public:
	static int m_a;//声明静态成员变量

	//静态成员变量也是有访问权限的
private:
	static int m_b;//声明私有静态成员变量

};

int person::m_a = 100;//在类外初始化
// 类::变量名 ::的作用是声明这个变量是哪个类的

int person::m_b = 10;

void test1() {
	person p;//创建一个person类对象p
	cout << "person::m_a的值是" << p.m_a << endl;//这里p.m_a已经被初始化为100了

	person p2;//再创建一个person类对象p2
	p2.m_a = 200;//将第二个对象的m_a赋值为200

	cout << "p.m_a的值是" << p.m_a << endl;//这里第一个对象p的m_a已经变成了200了 因为所有对象都共用一份数据
	cout << "p2.m_a的值是" << p2.m_a << endl;
}

void test2() {
	//既然静态成员变量不属于任何一个对象,所有对象都共享一份数据 
	//因此 静态成员变量有两种访问方式

	//1.通过对象来访问 
	person p;
	cout << "通过对象来访问静态成员变量:" << p.m_a << endl;;

	//2.通过类名来访问 
	cout << "通过类名来访问静态成员变量:" << person::m_a << endl;

	//调用私有成员person::m_b
	//cout << "调用私有成员p" << person::m_b << endl;
	//但这样会报错 C++ 成员 (已声明 所在行数:23) 不可访问 故静态成员变量也是有访问权限的

}


int main() {
	test1();

	test2();

	system("pause");
	return 0;
}
