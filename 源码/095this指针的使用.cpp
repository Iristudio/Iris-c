#include<iostream>
using namespace std;

//this指针
//c++通过提供特殊的对象指针 ,this指针 解决上述问题.this指针指向备调用的成员函数所属的对象

//this指针是隐含每一个非静态函数内的一个指针
//this指针不需要定义 直接使用即可

//this指针的妙用
//当形参与成员变量同名时 可以用this指针来区分
//在类的非静态成员函数中返回对象自身 可使用return *this


class person {
public:
	person(int age) {
		this->age = age;
		//这里如果写作 age = age;编译器并不会把前一个age理解为成员变量而是理解为形参
		//故这里使用this指针 编译器就知道这个age是当前类对象的成员变量age
	}

	person& personaddage(person p) {//这里的数据类型一定要引用 不然一次执行之后会创建一个新的对象 而不是一直用一个
		this->age += p.age;//这里的this与上面构造函数同理
		return *this;
		//见第42行的三次调用 如果想让第一次的调用之后还能继续调用 我们就要传对象回去确保每一次都是独立的调用
	}

	int age;
};

void test1() {
	person p1(18);
	cout << "p1的年龄是" << p1.age << endl;
}

void test2() {
	person p2(10);
	person p3(10);

	p3.personaddage(p2).personaddage(p2).personaddage(p2);//为了让连续的函数调用成功运行 我们要让函数传回的是当前对象 只是对象中的成员改变了

	cout << "p3的age是" << p3.age << endl;
}

int main() {
	test1();
	test2();


	system("pause");
	return 0;
}
