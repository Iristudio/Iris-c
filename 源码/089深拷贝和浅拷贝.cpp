#include<iostream>
using namespace std;
//深拷贝和浅拷贝
//浅拷贝会带来的问题就是 两个函数的指针指向一个堆区地址 但析构函数会释放两次地址 也就是会重复释放内存
//深拷贝会解决浅拷贝带来的问题 它在拷贝函数中另外开辟一个内存空间 用以保存被拷贝的函数的解引用
class person {
public:
	person() {
		cout << "person构造函数调用" << endl;
	}
	
	person(int age, int height) {
		m_age = age;
		m_height = new int(height);
		cout << "person有参构造函数调用" << endl;
	}
	
	person(const person& p) {
		m_age = p.m_age;
		//m_height = p.m_height; 
		//如果你不自己写拷贝函数(也就是浅拷贝) 编译器就会自动编写这行 但在vs2019的保姆级编译中 并不会出错 但vs2017中会报错
		m_height = new int(*p.m_height);//深拷贝
	}

	~person() {
		cout << "person析构函数调用" << endl;
	}

	int m_age;
	int* m_height;
};

void test() {
	person p1(18, 180);
	cout << "p1年龄是" << p1.m_age << "身高是" << *p1.m_height << endl;

	person p2(p1);
	cout << "p2年龄是" << p2.m_age << "身高是" << *p2.m_height << endl;
}

int main() {
	test();


	system("pause");
	return 0;
}
