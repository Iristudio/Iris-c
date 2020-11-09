#include<iostream>
using namespace std;

//const修饰成员函数
//在成员函数后加一个const我们称这个函数为常函数
//常函数内不可以修改成员属性
//成员属性声明时假关键字mutable后,在常函数中依然可以修改

//常对象
//声明对象前加const称该对象为常对象
//常对象只能调用常函数

class person {
public:

	void showperson() const {//这里的const其实可以理解为 const person* this const(常量指针常量(误^v^))
		//如果不写const   this的值是可以改变的的

		//this = NULL;//这样会报错 C++ 分配到“this”(记时错误)
		//this指针的实质是 指针常量 指针的指向是不可以改变的
	
		m_b = 100;
	}

	void showname() {
		cout << "name is person" << endl;
	}

	int m_a;
	mutable int m_b;//这里是一个特殊的变量 即使在常函数中 也可以修改这个值 加关键字mutable
};

//常函数
void test1() {
	person p;
	p.showperson();
	cout << "特殊变量(mutable) m_b = " << p.m_b << endl;
}

//常对象
void test2() {
	const person p1;
//	p1.m_a = 100;//这里会报错 C++ 表达式必须是可修改的左值
	p1.m_b = 100;//m_b就可以修改 因为他是特殊变量(mutable)

	//常对象只能调用常函数
	p1.showperson();
	cout << "p1特殊变量(mutable) m_b = " << p1.m_b << endl;

//	p1.showname();//这里会报错 C++ 对象含有与成员 函数 不兼容的类型限定符 对象类型是:  const person
	//因为普通成员函数可以修改成员变量(属性) 而常对象又是不可以改变属性的
}

int main() {
	test1();

	test2();

	system("pause");
	return 0;
}
